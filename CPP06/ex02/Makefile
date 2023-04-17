NAME = random

SRCS = Base.cpp main.cpp

CC = c++ -g
CFLAGS = -Wall -Werror -Wextra -std=c++98
NORM = norminette
RM = rm -rf

all: $(NAME)

$(NAME):

${NAME} :
		${CC} ${CFLAGS} ${SRCS} -o ${NAME}
		@echo "____Welcome to the game!____"

clean:
		${RM} ${NAME} ${NAME}.dSYM
		@echo "____Game over____"
fclean: clean

re: fclean all

.PHONY: all clean fclean re