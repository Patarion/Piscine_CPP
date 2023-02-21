/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 14:02:06 by jgagnon           #+#    #+#             */
/*   Updated: 2023/02/21 14:02:08 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

#ifndef CPP_HUMANB_HPP
#define CPP_HUMANB_HPP

class HumanB{
public :
    HumanB(std::string name);
    ~HumanB();
    void    Attack();
    void	SetWeapon(Weapon arme);

private :
    Weapon*     equipped;
    std::string name;
};

#endif //CPP_HUMANB_HPP
