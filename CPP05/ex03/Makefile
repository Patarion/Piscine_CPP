NAME = bureaucrat

SRCS = main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp  \
        Intern.cpp

CC = c++ -g
CFLAGS = -Wall -Werror -Wextra -std=c++98
NORM = norminette
RM = rm -rf

all: $(NAME)

$(NAME):

${NAME} :
		${CC} ${CFLAGS} ${SRCS} -o ${NAME}
		@echo "____La bureaucratie vient d'être instaurée dans la culture de votre Civilisation____"

clean:
		${RM} ${NAME} ${NAME}.dSYM
		@echo "____À BAS LA MONARCHIE! Je veux dire... À BAS LA BUREAUCRATIE!____"
fclean: clean

re: fclean all

.PHONY: all clean fclean re