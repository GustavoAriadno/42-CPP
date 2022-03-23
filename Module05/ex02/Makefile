NAME	=	execution

CC		=	g++
CCFLAGS	=	-Wall -Wextra -Werror -std=c++98
# -fsanitize=address

all		:	$(NAME)

$(NAME)	:	main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp
			$(CC) $(CCFLAGS) -o $@ $^

clean	:
			rm -rf $(NAME)

re		:	clean all

.PHONY	:	all clean re
