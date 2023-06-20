NAME = mutant

SRCS = main.cpp MutantStack.cpp

CC = c++ -g
CFLAGS = -Wall -Werror -Wextra -std=c++98
NORM = norminette
RM = rm -rf

all: $(NAME)

$(NAME):

${NAME} :
		${CC} ${CFLAGS} ${SRCS} -o ${NAME}
		@echo "Time to create a monster like the Loch Ness"

clean:
		${RM} ${NAME} ${NAME}.dSYM
		@echo "We failed miserably... We created a chihuahua!"
fclean: clean

re: fclean all


.PHONY: all clean fclean re