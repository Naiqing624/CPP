NAME = btc

CPP = c++

CPPFLAG = -Wall -Wextra -Werror -std=c++98

SRC = main.CPP

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME):$(OBJ)
	$(CPP) $(CPPFLAG) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CPP) $(CPPFLAG) -c %< -o %@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all