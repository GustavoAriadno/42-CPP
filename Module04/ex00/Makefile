NAME	=	animal

CC		=	g++
CCFLAGS	=	-Wall -Wextra -Werror -std=c++98

all		:	$(NAME)

$(NAME)	:	main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp
			$(CC) $(CCFLAGS) -o $@ $^

clean	:
			rm -rf $(NAME)

re		:	clean all

.PHONY	:	all clean re