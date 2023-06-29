NAME = PmergeMe

SRCS = main.cpp PmergeMe.cpp

CC = c++ -g
CFLAGS = -Wall -Werror -Wextra -std=c++98
NORM = norminette
RM = rm -rf

all: $(NAME)

$(NAME):

${NAME} :
		${CC} ${CFLAGS} ${SRCS} -o ${NAME}
		@echo "Merge with me daddy!"

clean:
		${RM} ${NAME} ${NAME}.dSYM
		@echo "BEGONE YOU HORNY CUNT!"
fclean: clean

re: fclean all


.PHONY: all clean fclean re