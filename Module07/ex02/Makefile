NAME	=	array

CC		=	g++
CCFLAGS	=	-Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-Shadow -fsanitize=address

all		:	$(NAME)

$(NAME)	:	main.cpp
			$(CC) $(CCFLAGS) -o $@ $^

clean	:
			rm -rf $(NAME)

re		:	clean all

.PHONY	:	all clean re