NAME = Clap

CPP = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = ClapTrap.cpp main.cpp ScavTrap.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp ClapTrap.hpp ScavTrap.hpp
	$(CPP) $(CPPFLAGS) -c $(SRC)

clean:
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : clean