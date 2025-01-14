/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrfig <aerrfig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 11:07:55 by aerrfig           #+#    #+#             */
/*   Updated: 2025/01/13 09:44:40 by aerrfig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "Wrong Type";
	std::cout << "WrongAnimal Constructor Called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	this->type = src.type;
	(void)src;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor Called\n";
}

void WrongAnimal::makeSound() const
{
	std::cout << "i have no sound yet :(\n";
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs)
{
	this->type = rhs.type;
	return *this;
}
