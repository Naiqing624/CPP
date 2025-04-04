# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/04 12:02:56 by marvin            #+#    #+#              #
#    Updated: 2025/04/04 12:02:56 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain

CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Animal.cpp \
	Brain.cpp \
	Cat.cpp \
	Dog.cpp \
	main.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re