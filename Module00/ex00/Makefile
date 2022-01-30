NAME	=	megaphone

CC		=	c++
CCFLAGS	=	-Wall -Wextra -Werror -std=c++98

all		:	$(NAME)

$(NAME)	:	$(NAME).cpp
			$(CC) $(CCFLAGS) -o $@ $<

clean	:
			rm -rf $(NAME)

re		:	clean all

.PHONY	:	all clean re
