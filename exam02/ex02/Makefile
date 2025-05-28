NAME = ex02

CPP = c++ -Wall -Werror -Wextra 

SBJ = ASpell.cpp ATarget.cpp Dummy.cpp Fwoosh.cpp main.cpp Warlock.cpp BrickWall.cpp Fireball.cpp Polymorph.cpp SpellBook.cpp TargetGenerator.cpp

OBJ = $(SBJ:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CPP) -c $< -o $@

fclean:
	rm -f $(OBJ)
	rm -f $(NAME)