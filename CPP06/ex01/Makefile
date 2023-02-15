NAME = serialize

SRCS = main.cpp Serialize.cpp

CC = c++ -g
CFLAGS = -Wall -Werror -Wextra -std=c++98
NORM = norminette
RM = rm -f

all: $(NAME)

$(NAME):

${NAME} :
		${CC} ${CFLAGS} ${SRCS} -o ${NAME}
		@echo "____BIP! BOUP! Création de Cyber Jean-Luc Mongrain____"

clean:
		${RM} ${NAME}
		@echo "____Débranchement du courant primaire. Djiouuuuuuuu...____"
fclean: clean

re: fclean all

.PHONY: all clean fclean re