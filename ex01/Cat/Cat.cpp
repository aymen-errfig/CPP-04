/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrfig <aerrfig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 11:07:55 by aerrfig           #+#    #+#             */
/*   Updated: 2025/01/14 14:35:09 by aerrfig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "../Brain/Brain.hpp"

Cat::Cat()
{
	this->type = "Cat";
	brains = new Brain();
	std::cout << "Cat Constructor Called\n";
}

Cat::Cat(const Cat &src)
{
	this->type = src.type;
	this->brains = new Brain(*src.brains);
}

Cat::~Cat()
{
	std::cout << "Cat Destructor Called\n";
	delete brains;
}

void Cat::makeSound() const
{
	std::cout << "Meow Meaws\n";
}

Brain* Cat::getBrain() const
{
	return this->brains;
}

Cat &Cat::operator=(Cat const &src)
{
	if (this != &src)
	{
		this->type = src.type;
		delete this->brains;
		this->brains = new Brain(*src.brains);
	}
	return (*this);
}
