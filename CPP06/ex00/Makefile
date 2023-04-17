NAME = conversion

SRCS = main.cpp

CC = c++ -g
CFLAGS = -Wall -Werror -Wextra -std=c++98
NORM = norminette
RM = rm -rf

all: $(NAME)

$(NAME):

${NAME} :
		${CC} ${CFLAGS} ${SRCS} -o ${NAME}
		@echo "____WOLOLO! C'est temps de convertir du monde____"

clean:
		${RM} ${NAME} ${NAME}.dSYM
		@echo "____Oh no! On a pas assez WOLOLO! On vient d'être assimilé____"
fclean: clean

re: fclean all

.PHONY: all clean fclean re