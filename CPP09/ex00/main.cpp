#include "BitcoinExchange.hpp"

int main (int argc, char **argv)
{
    std::deque<std::string>		*date = new std::deque<std::string>;
    std::deque<float>           *value = new std::deque<float>;
    std::deque<int>             *error = new std::deque<int>;
    std::string                 r_read;
    std::string                 r_date;
	std::string					val_cpy;
    std::string                 date_cpy;
    std::ifstream               input_file;
    std::ifstream               db_file;
    std::tm                     r_time = {};
    float                       r_val;
    int                         pos;
    int                         index;
    if (argc != 2)
    {
        std::cout << "Veuillez fournir un fichier texte avec des données sur la cryptomonnaie" << std::endl;
        delete date;
        delete value;
        delete error;
        exit(EXIT_FAILURE);
    }
    else if (argc == 2)
    {
        input_file.open(argv[1], std::ios::in);
        db_file.open("data.csv", std::ios::in);
        if (!input_file.is_open() || !db_file.is_open())
        {
            if (!input_file.is_open())
                std::cout << "Le fichier d'entré existe pas ou n'a pas pu être ouvert" << std::endl;
            else if (!db_file.is_open())
                std::cout << "La data base ne veut s'ouvrir s'ti. FAIT DONC UN CHMOD!" << std::endl;
            delete date;
            delete value;
            delete error;
            exit(EXIT_FAILURE);
        }
        getline(input_file, r_read);
        db_file.close();
    }
    index = 0;
    while (getline(input_file, r_read))
    {
		error->push_front(0);
        if (r_read.find("|") == std::string::npos)
		{
			error->pop_front();
            error->push_front(3);
		}
        else if (r_read.find("|") != std::string::npos)
        {
            pos = r_read.find("|");
            date_cpy = r_read.substr(0, pos - 1);
            std::istringstream valid_date;
			valid_date.str(date_cpy);
            valid_date >> std::get_time(&r_time, "%Y-%m-%d");
            if (r_time.tm_year == -1 || r_time.tm_mon == -1 || r_time.tm_mday == -1 || valid_date.fail())
			{
				error->pop_front();
                error->push_front(1);
			}
            date->push_front(date_cpy);
			if (error->front() == 0)
			{
            	val_cpy = r_read.substr(pos + 1, r_read.length());
            	try {
					r_val = stof(val_cpy);
				}
				catch (std::invalid_argument &exception)
				{
					error->pop_front();
					error->push_front(2);
            	}
				if (r_val < 0 || r_val > 1000)
				{
					error->pop_front();
					error->push_front(2);
				}
				else if (r_val > 0 && r_val <= 1000)
					value->push_front(r_val);
			}
        }
		switch (error->front())
		{
			case 0 : {
				int			input_date;
				int			int_date;
				int			pos;
				float		bit_value;
				std::string	cpy_val;
				std::string	prec_read;
				input_date = date_convert(date->front());
				bit_value = 0;
				pos = 0;
				int_date = 0;
				db_file.open("data.csv", std::ios::in);
				getline(db_file, r_read);
				getline(db_file, r_read);
				int_date = date_convert(r_read);
				if (int_date <= input_date)
				{
					pos = r_read.find(",");
					cpy_val = r_read.substr(pos + 1, r_read.length());
					bit_value = stof(cpy_val);
				}
				prec_read = r_read;
				while (getline(db_file, r_read))
				{
					int_date = 0;
					int_date = date_convert(r_read);
					if (int_date == input_date)
					{
						pos = r_read.find(",");
						cpy_val = r_read.substr(pos + 1, r_read.length());
						bit_value = stof(cpy_val);
						break ;
					}
					else if (int_date > input_date)
					{
						pos = prec_read.find(",");
						cpy_val = prec_read.substr(pos + 1, prec_read.length());
						bit_value = stof(cpy_val);
						break ;
					}
					prec_read = r_read;
				}
				std::cout << "Le taux de change de la date du " << date->front() << " est " << value->front() * bit_value;
				std ::cout << " avec le nombre de bitcoins suivant " << value->front() << std::endl;
				db_file.close();
				break ;
			}
			case 1 : {
				std::cout << "La date suivante : " << date->front() << " n'est pas valide" << std::endl;
				break ;
			}
			case 2 : {
				std::cout << "La valeur d'échange n'est pas valide ou négative" << std::endl;
				break ;
			}
			case 3 : {
				std::cout << "Le format de la ligne pour la database n'est pas valide" << std::endl;
				break ;
			}
		}
    }
	delete date;
    delete value;
    delete error;
}