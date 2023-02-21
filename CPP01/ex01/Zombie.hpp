/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 13:31:24 by jgagnon           #+#    #+#             */
/*   Updated: 2023/02/21 13:31:26 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CPP_ZOMBIE_HPP
#define CPP_ZOMBIE_HPP

#include <iostream>

class Zombie{
public:
    Zombie(void);
    ~Zombie(void);

    void    announce(void);
    void    Init_Name(std::string info);

private:
    std::string name;
};

Zombie* newZombie(std::string name);
void    RandomChump(std::string name);
Zombie* ZombieHorde(int N, std::string name);


#endif
