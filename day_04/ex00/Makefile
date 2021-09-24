NAME		= Animal
CC			= clang++
RM			= rm -rf
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98
SRCS		= main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp
INC			= Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp
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
