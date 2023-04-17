NAME = claptrap

SRCS = main.cpp Claptrap.cpp

CC = c++ -g
CFLAGS = -Wall -Werror -Wextra -std=c++98
NORM = norminette
RM = rm -rf

all: $(NAME)

$(NAME):

${NAME} :
		${CC} ${CFLAGS} ${SRCS} -o ${NAME}
		@echo "____Claptrap créé avec succès____"

clean:
		${RM} ${NAME} ${NAME}.dSYM
		@echo "____Claptrap a succombé aux escaliers____"
fclean: clean

re: fclean all

.PHONY: all clean fclean re