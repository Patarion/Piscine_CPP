#include "PmergeMe.hpp"
int main (int argc, char **argv)
{
    int                 i;
    clock_t             l_time;
    clock_t             v_time;
    std::list<int>      *l_tab = new std::list<int>;
    std::vector<int>    *v_tab = new std::vector<int>;

    if (argc < 2)
    {
        std::cout << "Veuillez fournir des éléments (intergers) à trier!" << std::endl;
        delete l_tab;
        delete v_tab;
        exit(EXIT_FAILURE);
    }
    i = 1;
    while (i < argc)
    {
        try {
            if(std::stoi(argv[i]) < 0)
            {
                std::cout << "Un des arguments est de valeur négative" << std::endl;
                exit(EXIT_FAILURE);
            }
            l_tab->push_back(std::stoi(argv[i]));
            v_tab->push_back(std::stoi(argv[i]));
        }
        catch (std::exception &exception)
        {
            std::cout << "Un des arguments n'est pas valide" << std::endl;
            delete l_tab;
            delete v_tab;
            exit (EXIT_FAILURE);
        }
        i++;
    }
    std::cout << "Voici le contenu des 2 listes : " << std::endl;
    for (std::list<int>::iterator it = l_tab->begin() ; it != l_tab->end() ; it++)
        std::cout << *it << " ";
    v_time = clock();
    l_time = clock();
    Split_Vector(v_tab);
    v_time = (double) clock() - v_time;
    l_time = (double) clock() - l_time;
    Split_List(l_tab);
    std::cout << std::endl << "Voyons voir si les 2 containers sont triés" << std::endl;
    std::cout << "Commençons par afficher pour le vecteur" << std::endl << "__________________________________" << std::endl;
    for (std::vector<int>::iterator v_it = v_tab->begin() ; v_it != v_tab->end() ; v_it++)
        std::cout << *v_it << " ";
    std::cout << std::fixed << std::setprecision(5) << std::endl << "Et le vecteur a pris : " <<  1000000.0 * v_time / CLOCKS_PER_SEC << " microsecondes" << std::endl;
    std::cout << std::endl << "Maintenant affichons la list" << std::endl << "__________________________________" << std::endl;
    for (std::list<int>::iterator l_it = l_tab->begin() ; l_it != l_tab->end() ; l_it++)
        std::cout << *l_it << " ";
    std::cout << std::fixed << std::setprecision(5) << std::endl << "Et la list a pris : " << 1000000.0 * l_time / CLOCKS_PER_SEC << " microsecondes" << std::endl;
    delete v_tab;
    delete l_tab;
}