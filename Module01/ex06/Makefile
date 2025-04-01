# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nacao <nacao@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/24 11:16:14 by naiqing           #+#    #+#              #
#    Updated: 2025/03/27 14:49:17 by nacao            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harlFilter

CPP = c++
CPPFLAG = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Harl.cpp
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

re: fclean all

.PHONY: all clean fclean re