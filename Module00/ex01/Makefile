NAME	=	phonebook

CC		=	c++
CCFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRC		=	main.cpp	\
			Contact.cpp	\
			PhoneBook.cpp

all		:	$(NAME)

$(NAME)	:	$(SRC)
			$(CC) $(CCFLAGS) -o $@ $^

clean	:
			rm -rf $(NAME)

re		:	clean all

.PHONY	:	all clean re
