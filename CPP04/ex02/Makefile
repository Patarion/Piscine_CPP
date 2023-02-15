NAME = animal

SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

CC = c++ -g
CFLAGS = -Wall -Werror -Wextra -std=c++98
NORM = norminette
RM = rm -f

all: $(NAME)

$(NAME):

${NAME} :
		${CC} ${CFLAGS} ${SRCS} -o ${NAME}
		@echo "____Animal créé avec succès____"

clean:
		${RM} ${NAME}
		@echo "____L'animalerie ferme ses portes pour réouvrir____"
fclean: clean

re: fclean all

.PHONY: all clean fclean re