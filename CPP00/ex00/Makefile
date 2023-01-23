NAME = megaphone

SRCS = megaphone.cpp

CC = c++ -g
CFLAGS = -Wall -Werror -Wextra -std=c++98
NORM = norminette
RM = rm -f

all: $(NAME)

$(NAME):

${NAME} :
		${CC} ${CFLAGS} ${SRCS} -o ${NAME}
		@echo "____Megaphone créé avec succès____"

clean:
		${RM} ${NAME}
		@echo "____L'exécutable a été supprimé____"
fclean: clean

re: fclean all

.PHONY: all clean fclean re