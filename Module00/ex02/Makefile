NAME	=	tests

CC		=	c++
CCFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRC		=	tests.cpp Account.cpp

all		:	$(NAME)

$(NAME)	:	$(SRC)
			$(CC) $(CCFLAGS) -o $@ $^

clean	:
			rm -rf $(NAME)

re		:	clean all

.PHONY	:	all clean re
