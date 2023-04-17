/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 10:28:48 by jgagnon           #+#    #+#             */
/*   Updated: 2023/02/28 10:28:49 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CPP_CLAPTRAP_HPP
#define CPP_CLAPTRAP_HPP

#include <iostream>

class Claptrap {
public :
    Claptrap(std::string name);
    Claptrap(Claptrap &cpy);
    ~Claptrap();
    void    attack(const std::string &target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);

    Claptrap & operator=(Claptrap &cpy);

private :
    std::string     _Name;
    int             _Hit_Points;
    int             _Energy;
    int             _Attack_Damage;
};

#endif //CPP_CLAPTRAP_HPP
