/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:55:03 by jgagnon           #+#    #+#             */
/*   Updated: 2023/02/20 15:55:05 by jgagnon          ###   ########.fr       */
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
    void attack();

private :
    std::string name;
    Weapon&     equipped;
};

#endif //CPP_HUMANA_HPP
