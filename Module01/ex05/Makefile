NAME	=	Karen2.0

CC		=	g++
CCFLAGS	=	-Wall -Wextra -Werror -std=c++98

all		:	$(NAME)

$(NAME)	:	main.cpp Karen.cpp
			$(CC) $(CCFLAGS) -o $@ $^

clean	:
			rm -rf $(NAME)

re		:	clean all

.PHONY	:	all clean re
