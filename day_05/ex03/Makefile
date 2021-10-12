NAME		= Forms
CC			= clang++
RM			= rm -rf
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98
SRCS		= main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp \
			PresidentialPardonForm.cpp Intern.cpp
INC			= Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp \
			Intern.hpp
OBJ	 		= $(patsubst %.cpp, %.o, $(SRCS))
all : 		$(NAME)
$(NAME) :	$(OBJ)
			$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
%.o : %.cpp $(INC)
			$(CC) $(CPPFLAGS) -c $< -o $@
clean :
			$(RM) $(OBJ)
fclean : 	clean
			$(RM) $(NAME) Forest_shrubbery
re :		fclean all
.PHONY :	all clean fclean re
