# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: naiqing <naiqing@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/18 15:16:09 by naiqing           #+#    #+#              #
#    Updated: 2025/03/18 15:59:26 by naiqing          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex02

CPP = c++
CPPFLAG = -Wall -Wextra -Werror -std=c++98

SRC = main.CPP
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