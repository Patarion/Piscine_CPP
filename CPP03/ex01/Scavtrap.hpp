/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scavtrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 10:30:00 by jgagnon           #+#    #+#             */
/*   Updated: 2023/02/28 10:30:03 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_SCAVTRAP_HPP
#define CPP_SCAVTRAP_HPP

#include "Claptrap.hpp"

class Scavtrap : public Claptrap{
public :
    Scavtrap(std::string name);
    Scavtrap(Scavtrap &cpy);
    ~Scavtrap();
    void    attack(const std::string &target);
    void    guardGate();

    Scavtrap & operator=(Scavtrap &cpy);
private :

};

#endif //CPP_SCAVTRAP_HPP
