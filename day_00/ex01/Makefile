NAME		= awesome
CC			= clang++
RM			= rm -rf
CPPFLAGS	= -Wall -Wextra -Werror
SRCS		= awesome.cpp phonebook.class.cpp contact.class.cpp
INC			= awesome.hpp phonebook.class.hpp contact.class.hpp
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
