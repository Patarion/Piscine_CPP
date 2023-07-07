NAME = btc

SRCS = main.cpp BitcoinExchange.cpp

CC = c++ -g
CFLAGS = -Wall -Werror -Wextra -std=c++98
NORM = norminette
RM = rm -rf

all: $(NAME)

$(NAME):

${NAME} :
		${CC} ${CFLAGS} ${SRCS} -o ${NAME}
		@echo "What could go wrong with NFTs? Let's try to make some stonks"

clean:
		${RM} ${NAME} ${NAME}.dSYM
		@echo "and... IT'S GONE!"
fclean: clean

re: fclean all


.PHONY: all clean fclean re