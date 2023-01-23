NAME = violence

SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

CC = c++ -g
CFLAGS = -Wall -Werror -Wextra -std=c++98
NORM = norminette
RM = rm -f

all: $(NAME)

$(NAME):

${NAME} :
		${CC} ${CFLAGS} ${SRCS} -o ${NAME}
		@echo "____Violence créée avec succès____ Wait..."

clean:
		${RM} ${NAME}
		@echo "____L'exécutable a été supprimé____"
fclean: clean

re: fclean all

.PHONY: all clean fclean re