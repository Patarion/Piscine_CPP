#include "BitcoinExchange.hpp"

int	date_convert(std::string date)
{
	int	r_date;

	r_date = 0;
	r_date += stoi(date.substr(0, 4)) * 10000;
	r_date += stoi(date.substr(5, 7)) * 100;
	r_date += stoi(date.substr(8, 10));
	return (r_date);
}