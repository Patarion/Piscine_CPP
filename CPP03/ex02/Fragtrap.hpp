/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fragtrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 10:33:52 by jgagnon           #+#    #+#             */
/*   Updated: 2023/02/28 10:33:54 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.hpp"

#ifndef CPP_FRAGTRAP_HPP
#define CPP_FRAGTRAP_HPP

class Fragtrap : public Claptrap {
public:
    Fragtrap(std::string name);
    Fragtrap(Fragtrap &cpy);
    ~Fragtrap();
    void highFivesGuys(void);

    Fragtrap & operator=(Fragtrap &cpy);

};

#endif //CPP_FRAGTRAP_HPP
