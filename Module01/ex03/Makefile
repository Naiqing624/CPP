# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: naiqing <naiqing@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/20 10:04:56 by naiqing           #+#    #+#              #
#    Updated: 2025/03/20 15:04:22 by naiqing          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Weapon

CPP = c++
CPPFLAG = -Wall -Wextra -Werror -std=c++98

SRC = HumanA.cpp \
	HumanB.cpp \
	main.cpp \
	Weapon.cpp
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

re: clean fclean all

.PHONY: all clean fclean re