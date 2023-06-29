#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    std::map<std::string, double>   *crypt_data = new std::map<std::string, double>;
    std::string                     r_read;
    std::string                     r_date;
    std::tm                         r_time = {};
//    double                          r_val;
//    int                             pos;
    if (argc != 2)
    {
        std::cout << "Veuillez fournir un fichier texte avec des données sur la cryptomonnaie" << std::endl;
        exit(EXIT_FAILURE);
    }
    else if (argc == 2)
    {
        std::ifstream data_file;
        data_file.open(argv[1], std::ios::in);
        if (!data_file.is_open())
        {
            std::cout << "Le fichier existe pas ou n'a pas pu être ouvert" << std::endl;
            exit(EXIT_FAILURE);
        }
        while(getline(data_file, r_read))
        {
            if (r_read.find(",") != std::string::npos)
            {
                r_date = r_read.substr(0, r_read.find(",") - 1);
                std::cout << r_date << std::endl;
                r_date >> std::get_time(&r_time, "%Y-%m-%d");
                if (r_date.tm_year == -1 || time.tm_mon == -1 || time.tm_mday == -1)
                    r_date << " n'est pas une date valide";
            }
        }
    }
    delete crypt_data;
}