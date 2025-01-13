/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrfig <aerrfig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 11:07:55 by aerrfig           #+#    #+#             */
/*   Updated: 2025/01/13 10:04:37 by aerrfig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	type = "No Type";
	std::cout << "Animal Constructor Called\n";
}

Animal::Animal(const Animal &src)
{
	this->type = src.type;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor Called\n";
}

void Animal::makeSound() const
{
	std::cout << "i have no sound yet :(\n";
}

std::string Animal::getType() const
{
	return (this->type);
}

Animal &Animal::operator=(Animal const &rhs)
{
	this->type = rhs.type;
	return *this;
}
