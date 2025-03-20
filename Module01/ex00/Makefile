# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: naiqing <naiqing@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/18 11:00:40 by naiqing           #+#    #+#              #
#    Updated: 2025/03/18 13:36:30 by naiqing          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

CPP = c++
CPPFLAG = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp \
	Zombie.cpp \
	newZombie.cpp \
	randomChump.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CPPFLAG) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CPP) $(CPPFLAG) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: all clean fclean

.PHONY: all clean fclean re