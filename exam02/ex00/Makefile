NAME = exam00

CPP = c++ -Wall -Wextra -Werror

SBJ = Warlock.cpp main.cpp
OBJ = $(SBJ:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CPP) -c $< -o $@

fclean:
	rm -f $(OBJ)
	rm -f $(NAME)