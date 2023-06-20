NAME = iter

SRCS = main.cpp

CC = c++ -g
CFLAGS = -Wall -Werror -Wextra -std=c++98
NORM = norminette
RM = rm -rf

all: $(NAME)

$(NAME):

${NAME} :
		${CC} ${CFLAGS} ${SRCS} -o ${NAME}
		@echo "____Iter s'tu le I de Pixar dans la terre?____"

clean:
		${RM} ${NAME} ${NAME}.dSYM
		@echo "____I! Ter-rible ton jeu de mot...____"
fclean: clean

re: fclean all

.PHONY: all clean fclean re