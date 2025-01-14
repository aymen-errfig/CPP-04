/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrfig <aerrfig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 11:07:55 by aerrfig           #+#    #+#             */
/*   Updated: 2025/01/14 13:41:41 by aerrfig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "../Brain/Brain.hpp"


Dog::Dog()
{
	this->type = "Dog";
	brains = new Brain();
	std::cout << "Dog Constructor Called\n";
}

Dog::Dog(const Dog &src)
{
	this->type = src.type;
	this->brains = new Brain(*src.brains);
}

Dog::~Dog()
{
	std::cout << "Dog Destructor Called\n";
	delete brains;
}

void Dog::makeSound() const
{
	std::cout << "dog barks\n";
}

Brain* Dog::getBrain() const
{
	return this->brains;
}


Dog& Dog::operator=(const Dog &src)
{
	if (this != &src)
	{
		this->type = src.type;
		delete this->brains;
		this->brains = new Brain(*src.brains);
	}
	return (*this);
}