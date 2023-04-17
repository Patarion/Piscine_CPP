/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:50:44 by jgagnon           #+#    #+#             */
/*   Updated: 2023/02/20 15:50:46 by jgagnon          ###   ########.fr       */
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
void    randomChump(std::string name);

#endif
