NAME = fragtrap

SRCS = main.cpp Claptrap.cpp Scavtrap.cpp Fragtrap.cpp

CC = c++ -g
CFLAGS = -Wall -Werror -Wextra -std=c++98
NORM = norminette
RM = rm -rf

all: $(NAME)

$(NAME):

${NAME} :
		${CC} ${CFLAGS} ${SRCS} -o ${NAME}
		@echo "____Fragtrap créé avec succès____"

clean:
		${RM} ${NAME} ${NAME}.dSYM
		@echo "____Fragtrap a succombé aux escaliers____"
		@echo "____Wait a minute... BOOOOOOM!!!____"
fclean: clean

re: fclean all

.PHONY: all clean fclean re