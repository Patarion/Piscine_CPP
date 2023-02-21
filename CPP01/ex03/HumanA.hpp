/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 14:01:35 by jgagnon           #+#    #+#             */
/*   Updated: 2023/02/21 14:01:37 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

#ifndef CPP_HUMANA_HPP
#define CPP_HUMANA_HPP

class HumanA{
public:
    HumanA(std::string name ,Weapon& arme);
    ~HumanA(void);
    void Attack();

private :
    std::string name;
    Weapon&     equipped;
};

#endif //CPP_HUMANA_HPP
