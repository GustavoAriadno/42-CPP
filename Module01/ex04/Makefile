NAME	=	sed

CC		=	g++
CCFLAGS	=	-Wall -Wextra -Werror 

all		:	$(NAME)

$(NAME)	:	main.cpp
			$(CC) $(CCFLAGS) -o $@ $^

clean	:
			rm -rf $(NAME)

re		:	clean all

.PHONY	:	all clean re
