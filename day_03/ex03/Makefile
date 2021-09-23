NAME		= DiamondTrap
CC			= clang++
RM			= rm -rf
CPPFLAGS	= -Wall -Wextra -Werror -Wno-shadow -Wshadow -std=c++98
SRCS		= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
INC			= ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp
OBJ	 		= $(patsubst %.cpp, %.o, $(SRCS))
all : 		$(NAME)
$(NAME) :	$(OBJ)
			$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
%.o : %.cpp $(INC)
			$(CC) $(CPPFLAGS) -c $< -o $@
clean :
			$(RM) $(OBJ)
fclean : 	clean
			$(RM) $(NAME)
re :		fclean all
.PHONY :	all clean fclean re
