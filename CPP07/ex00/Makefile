NAME = whatever

SRCS = main.cpp

CC = c++ -g
CFLAGS = -Wall -Werror -Wextra -std=c++98
NORM = norminette
RM = rm -rf

all: $(NAME)

$(NAME):

${NAME} :
		${CC} ${CFLAGS} ${SRCS} -o ${NAME}
		@echo "____Un template s'tu une heure tard?____"

clean:
		${RM} ${NAME} ${NAME}.dSYM
		@echo "____Ouin non c'est plus pour dire que c'est l'heure du latté____"
fclean: clean

re: fclean all

.PHONY: all clean fclean re