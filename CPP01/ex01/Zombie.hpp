/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:52:10 by jgagnon           #+#    #+#             */
/*   Updated: 2023/02/20 15:52:35 by jgagnon          ###   ########.fr       */
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
    void    init_name(std::string info);

private:
    std::string name;
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);
Zombie* zombieHorde(int N, std::string name);


#endif
