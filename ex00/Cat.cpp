/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrfig <aerrfig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 11:07:55 by aerrfig           #+#    #+#             */
/*   Updated: 2025/01/13 10:04:37 by aerrfig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Cat Constructor Called\n";
}

Cat::Cat(const Cat &src)
{
	this->type = src.type;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor Called\n";
}

void Cat::makeSound() const
{
	std::cout << "Meow Meaw\n";
}

Cat &Cat::operator=(Cat const &rhs)
{
	this->type = rhs.type;
	return *this;
}
