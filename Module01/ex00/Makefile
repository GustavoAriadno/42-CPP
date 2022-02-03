NAME	=	ZombieInvasion

CC		=	c++
CCFLAGS	=	-Wall -Wextra -Werror -std=c++98

all		:	$(NAME)

$(NAME)	:	main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
			$(CC) $(CCFLAGS) -o $@ $^

clean	:
			rm -rf $(NAME)

re		:	clean all

.PHONY	:	all clean re
