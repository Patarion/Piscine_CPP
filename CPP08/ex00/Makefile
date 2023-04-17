NAME = easyfind

SRCS = main.cpp

CC = c++ -g
CFLAGS = -Wall -Werror -Wextra -std=c++98
NORM = norminette
RM = rm -rf

all: $(NAME)

$(NAME):

${NAME} :
		${CC} ${CFLAGS} ${SRCS} -o ${NAME}
		@echo "_______EAZY_PZ-LEMON_SQUEEZY_______"

clean:
		${RM} ${NAME} ${NAME}.dSYM
		@echo "_______GIT_GUD_SCRUB_______"
fclean: clean

re: fclean all


.PHONY: all clean fclean re