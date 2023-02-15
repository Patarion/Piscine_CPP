#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Bienvenue au cerveau département des idées à l'appareil!" << std::endl;
}

Brain::Brain(Brain &cpy) {
    std::cout << "Le cerveau de Rodrigue fait pas la job. On s'en va chez Jean-Pierre!" << std::endl;
    *this = cpy;
}

Brain::~Brain() {
    std::cout << "C'est l'heure du dodo. Oublie pas de faire ton p'tit pôpi!" << std::endl;

}

void Brain::fullIdeas(std::string idea){

    int i;

    for (i = 0 ; i < 100 ; i++)
        ideas[i] = idea;
}

void Brain::setIdea(std::string idea, int i) {
    ideas[i] = idea;
}

std::string Brain::getIdea(int i) {
    return ideas[i];
}