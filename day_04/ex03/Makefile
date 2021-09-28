NAME		= Kawabanga
CC			= clang++
RM			= rm -rf
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98
SRCS		= main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp
INC			= AMateria.hpp Character.hpp Cure.hpp Ice.hpp ICharacter.hpp IMateriaSource.hpp MateriaSource.hpp
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
