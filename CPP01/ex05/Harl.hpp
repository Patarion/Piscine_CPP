/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 14:20:12 by jgagnon           #+#    #+#             */
/*   Updated: 2023/02/21 14:20:13 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CPP_HARL_HPP
#define CPP_HARL_HPP

#include <iostream>

class Harl{
public:
    Harl();
    ~Harl();
    void complain(std::string level);

private :
    void    _debug(void) const;
    void    _info(void) const;
    void    _warning(void) const;
    void    _error(void) const;

    std::string _levels[4];
    void (Harl::*_actions[4])(void) const;
};

#endif //CPP_HARL_HPP
