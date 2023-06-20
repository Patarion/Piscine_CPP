NAME = rpn

SRCS = main.cpp RPN.cpp

CC = c++ -g
CFLAGS = -Wall -Werror -Wextra -std=c++98
NORM = norminette
RM = rm -rf

all: $(NAME)

$(NAME):

${NAME} :
		${CC} ${CFLAGS} ${SRCS} -o ${NAME}
		@echo "Time to do the reverse Polish dance"

clean:
		${RM} ${NAME} ${NAME}.dSYM
		@echo "MISSION ABORT! ABORT!"
fclean: clean

re: fclean all


.PHONY: all clean fclean re