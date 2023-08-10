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
		@echo "_______Time to create a monster like the Loch Ness_______"

clean:
		${RM} ${NAME} ${NAME}.dSYM
		@echo "_______We failed miserably... We created a chihuahua!_______"
fclean: clean

re: fclean all


.PHONY: all clean fclean re