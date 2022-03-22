NAME	=	formu

CC		=	g++
CCFLAGS	=	-Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-Shadow
# -fsanitize=address

all		:	$(NAME)

$(NAME)	:	main.cpp Bureaucrat.cpp Form.cpp
			$(CC) $(CCFLAGS) -o $@ $^

clean	:
			rm -rf $(NAME)

re		:	clean all

.PHONY	:	all clean re