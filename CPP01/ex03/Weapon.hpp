/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:56:49 by jgagnon           #+#    #+#             */
/*   Updated: 2023/02/20 15:56:51 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef CPP_WEAPON_HPP
#define CPP_WEAPON_HPP

class Weapon{
public:
    Weapon(std::string name);
    ~Weapon();
    std::string _getType() const;
    void        setType(std::string info);
private :
    std::string type;
};

#endif //CPP_WEAPON_HPP
