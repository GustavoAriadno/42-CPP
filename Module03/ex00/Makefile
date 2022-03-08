NAME	=	clap

CC		=	g++
CCFLAGS	=	-Wall -Wextra -Werror -std=c++98

all		:	$(NAME)

$(NAME)	:	main.cpp ClapTrap.cpp
			$(CC) $(CCFLAGS) -o $@ $^

clean	:
			rm -rf $(NAME)

re		:	clean all

.PHONY	:	all clean re
