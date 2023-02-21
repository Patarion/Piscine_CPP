/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 14:02:39 by jgagnon           #+#    #+#             */
/*   Updated: 2023/02/21 14:02:40 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef CPP_WEAPON_HPP
#define CPP_WEAPON_HPP

class Weapon{
public:
    Weapon(std::string name);
    ~Weapon();
    std::string GetType() const;
    void        SetType(std::string info);
private :
    std::string _type;
};

#endif //CPP_WEAPON_HPP
