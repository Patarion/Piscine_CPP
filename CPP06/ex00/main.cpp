/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgagnon <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 15:09:08 by jgagnon           #+#    #+#             */
/*   Updated: 2023/03/05 15:09:09 by jgagnon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <cstring>


char ParseArg(std::string info)
{
    int i;

    i = 0;
    if (info.length() == 1 && isascii(info[i]))
        return ('c');
    if (info[i] == '-')
        i++;
    while (isdigit(info[i]) != 0)
        i++;
	try {
    	if (info[i] == '\0' && stoi(info) > INT_MIN && stoi(info) < INT_MAX)
        	return ('i');
	}
    catch (std::exception &ex)
    { 

	}
    if (info[i] == '.')
    {
        i++;
        while (info[i] != '\0' && isdigit(info[i]) != 0)
            i++;
        if (info[i + 1] == '\0' && info[i] == 'f')
           	return ('f');
        else if (info[i] == '\0')
            return ('d');
    }
    return ('0');
}

void char_convert(char *str)
{
    char c;

    c = str[0];
    std::cout << "Char value : " << c << std::endl;
    std::cout << "Integer value : " << static_cast<int>(c) << std::endl;
    std::cout << "Float value : " << static_cast<float>(c) << "f" << std::endl;
    std::cout << "Double value : " << static_cast<double>(c) << std::endl;
}

void int_convert(char *str)
{
    int i;

    i = 0;
    while (*str != '\0')
    {
        i = (i * 10) + ((*str - 0x30));
        str++;
    }
    if (isprint(i) != 0)
        std::cout << "Char value : " << static_cast<char>(i) << std::endl;
    else if (isprint(i) == 0)
        std::cout << "Char value : Impossible to print" << std::endl;
    std::cout << "Integer value : " << i << std::endl;
    std::cout << "Float value : " << static_cast<float>(i) << "f" << std::endl;
    std::cout << "Double value : " << static_cast<double>(i) << std::endl;
}

void float_convert(char *str)
{
    long double base;
    long double decimal;
    long double exp;
    float       f;

    base = 0;
    decimal = 0;
    exp = 1;
    while (*str != '.')
    {
        base = (base * 10) + (*str - 0x30);
        str++;
    }
    str++;
    while (*str != 'f')
    {
        decimal = (decimal * 10) + (*str - 0x30);
        str++;
        exp *= 10;
    }
    decimal /= exp;
    f = base + decimal;
    if (isprint(f) != 0)
        std::cout << "Char value : " << static_cast<char>(f) << std::endl;
    else if (isprint(f) == 0)
        std::cout << "Char value : Impossible to print" << std::endl;
    std::cout << "Integer value : " << static_cast<int>(f) << std::endl;
    std::cout << "Float value : " << f << "f" << std::endl;
    std::cout << "Double value : " << static_cast<double>(f) << std::endl;
}

void double_converter(char *str)
{
    long double     base;
    long double     decimal;
    long double     exp;
    double          d;

    base = 0;
    decimal = 0;
    exp = 1;
    while (*str != '.')
    {
        base = (base * 10) + (*str - 0x30);
        str++;
    }
    str++;
    while (*str != '\0')
    {
        decimal = (decimal * 10) + (*str - 0x30);
        str++;
        exp *= 10;
    }
    d = base + (decimal / exp);
    if (isprint(d) != 0)
        std::cout << "Char value : " << static_cast<char>(d) << std::endl;
    else if (isprint(d) == 0)
        std::cout << "Char value : Impossible to print" << std::endl;
    std::cout << "Integer value : " << static_cast<int>(d) << std::endl;
    std::cout << "Float value : " << static_cast<float>(d) << "f" << std::endl;
    std::cout << "Double value : " << d << std::endl;
}

int main (int argc, char **argv)
{
    char    type;

    if (argc != 2)
    {
        std::cout << "Veuillez fournir un seul paramètre" <<std::endl;
        return (-1);
    }
    if (strcmp(argv[1], "-inf") == 0 || strcmp(argv[1], "+inf") == 0 || strcmp(argv[1], "nan") == 0
        || strcmp(argv[1], "-inff") == 0 || strcmp(argv[1], "+inff") == 0 || strcmp(argv[1], "nanf") == 0)
    {
        std::cout << "Char value : Impossible" << std::endl;
        std::cout << "Integer value : Impossible" << std::endl;
        std::cout << "Float value : " << argv[1] << "f" << std::endl;
        std::cout << "Double value : " << argv[1] << std::endl;
        return (-1);
    }
    type = ParseArg(argv[1]);
    if (type == 'c')
        char_convert(argv[1]);
    else if (type == 'i')
        int_convert(argv[1]);
    else if (type == 'f')
        float_convert(argv[1]);
    else if (type == 'd')
        double_converter(argv[1]);
}
