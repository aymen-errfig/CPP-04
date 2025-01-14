# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aerrfig <aerrfig@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/05 15:42:11 by aerrfig           #+#    #+#              #
#    Updated: 2025/01/14 14:33:14 by aerrfig          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animals
FLAGS = -Wall -Wextra -Werror -std=c++98 #-fsanitize=address -g
CP = c++
srcs = Animal/Animal.cpp Animal/WrongAnimal.cpp Brain/Brain.cpp Cat/Cat.cpp Cat/WrongCat.cpp Dog/Dog.cpp Dog/WrongDog.cpp main.cpp
heads = Animal/Animal.hpp Animal/WrongAnimal.hpp Brain/Brain.hpp Cat/Cat.hpp Cat/WrongCat.hpp Dog/Dog.hpp Dog/WrongDog.hpp
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