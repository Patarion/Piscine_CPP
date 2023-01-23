#include <iostream>

int main (int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = -1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else if (argc > 1)
	{
		while (argv[++i] != NULL)
		{
			while (argv[i][++j] != '\0')
				std::cout << char(toupper(argv[i][j]));
			j = -1;
		}
		std::cout << std::endl;
	}
}
