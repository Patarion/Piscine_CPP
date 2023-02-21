/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 13:25:19 by jgagnon           #+#    #+#             */
/*   Updated: 2023/02/21 13:25:21 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CPP_ZOMBIE_HPP
#define CPP_ZOMBIE_HPP

#include <iostream>

class Zombie{
public:
    Zombie(std::string info);
    ~Zombie(void);

    void    announce(void);

private:
    std::string name;
};

Zombie* newZombie(std::string name);
void    RandomChump(std::string name);

#endif
