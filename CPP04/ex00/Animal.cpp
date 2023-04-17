/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 09:34:00 by jgagnon           #+#    #+#             */
/*   Updated: 2023/03/01 09:34:01 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(std::string type) : type(type) {
    std::cout << "On a un nouvel arrivant chez NintenAnimalz" << std::endl;
}

Animal::Animal(Animal &cpy) {
    std::cout << "On a un échange d'animal chez NitenAnimalz" << std::endl;
    *this = cpy;
}

Animal::~Animal() {
    std::cout << "Une console DS oubliée à jamais... SHAME!" << std::endl;
}

std::string Animal::getType() const {
    return type;
}

void Animal::makeSound() const {
    std::cout << "Son d'animal random" << std::endl;
}

Animal & Animal::operator=(Animal &cpy)
{
    this->type = cpy.getType();
    return *this;
}

std::ostream & operator<<(std::ostream &out, Animal const &val){
    std::cout <<  "Voici l'espèce de l'animal " + val.getType() + " et il fait le son suivant ";
    val.makeSound();
    return out;
}