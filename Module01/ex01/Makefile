# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nacao <nacao@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/18 13:41:03 by naiqing           #+#    #+#              #
#    Updated: 2025/03/27 14:01:05 by nacao            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

CPP = c++
CPPFLAG = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp \
	Zombie.cpp \
	zombieHorde.cpp
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CPPFLAG) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CPP) $(CPPFLAG) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all 

.PHONY: all clean fclean re
