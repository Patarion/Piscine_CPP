NAME = span

SRCS = main.cpp Span.cpp

CC = c++ -g
CFLAGS = -Wall -Werror -Wextra -std=c++98
NORM = norminette
RM = rm -rf

all: $(NAME)

$(NAME):

${NAME} :
		${CC} ${CFLAGS} ${SRCS} -o ${NAME}
		@echo "_______Time-to-Span_______"

clean:
		${RM} ${NAME} ${NAME}.dSYM
		@echo "_______SPAM_SPAM_SPAM_SPAM_SPAM_______"
fclean: clean

re: fclean all


.PHONY: all clean fclean re