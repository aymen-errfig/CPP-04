# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aerrfig <aerrfig@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/05 15:42:11 by aerrfig           #+#    #+#              #
#    Updated: 2025/01/14 14:29:08 by aerrfig          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animals
FLAGS = -Wall -Wextra -Werror -std=c++98
CP = c++
srcs = Animal/Animal.cpp Cat/Cat.cpp Dog/Dog.cpp Animal/WrongAnimal.cpp Cat/WrongCat.cpp Dog/WrongDog.cpp main.cpp
heads = Animal/Animal.hpp Cat/Cat.hpp Dog/Dog.hpp Animal/WrongAnimal.hpp Cat/WrongCat.hpp Dog/WrongDog.hpp
objs = ${srcs:.cpp=.o}
RM = rm -f

all: $(NAME)

%.o: %.cpp $(heads)
	$(CP) $(FLAGS) -c $< -o $@

$(NAME): $(objs)
	$(CP) $(FLAGS) $(objs) -o $(NAME)

clean:
	$(RM) $(objs)

fclean: clean
	$(RM) $(NAME)

re: fclean all