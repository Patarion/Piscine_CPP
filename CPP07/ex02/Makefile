NAME = array

SRCS = main.cpp

CC = c++ -g
CFLAGS = -Wall -Werror -Wextra -std=c++98
NORM = norminette
RM = rm -rf

all: $(NAME)

$(NAME):

${NAME} :
		${CC} ${CFLAGS} ${SRCS} -o ${NAME}
		@echo "____Arrrrrrrr-yayyyyyyy____"

clean:
		${RM} ${NAME} ${NAME}.dSYM
		@echo "____Arrrrrrrr-ayyyyyytttttteeeeeeeeee____"
fclean: clean

re: fclean all


.PHONY: all clean fclean re