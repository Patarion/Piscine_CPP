/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 15:25:21 by jgagnon           #+#    #+#             */
/*   Updated: 2023/03/05 16:19:12 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "whatever.hpp"

int main (void)
{
    char c1;
    char c2;
    float f1;
    float f2;
    int a;
    int b;

    c1 = 'g';
    c2 = '8';
    f1 = 56.56f;
    f2 = 12.12f;
    a = 12;
    b = 10;

    std::cout << "Voici c1 : " << c1 << " et voici c2 : " << c2 << std::endl;
    std::cout << "Voici le max de c1 et c2 : " << max(c1, c2) << std::endl;
    std::cout << "Voici le min de c1 et c2 : " << min(c1, c2) << std::endl;
    swap(c1, c2);
    std::cout << "On les interchange maintenant! c1 : " << c1 << " et c2 : " << c2 << std::endl;

    std::cout << "Voici f1 : " << f1 << " et voici : " << f2 << std::endl;
    std::cout << "Voici le max de f1 et f2 : " << max(f1, f2) << std::endl;
    std::cout << "Voici le min de f1 et f2 : " << min(f1, f2) << std::endl;
    swap(f1, f2);
    std::cout << "On les interchange maintenant! f1 : " << f1 << " et f2 : " << f2 << std::endl;

    std::cout << "Voici a : " << a << " et voici b : " << b << std::endl;
    std::cout << "Voici le max de a et b : " << max(a, b) << std::endl;
    std::cout << "Voici le min de a et b : " << min(a, b) << std::endl;
    swap(a, b);
    std::cout << "On les interchange maintenant! a : " << a << " et b : " << b << std::endl;
}
