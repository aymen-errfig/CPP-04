/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrfig <aerrfig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 11:07:55 by aerrfig           #+#    #+#             */
/*   Updated: 2025/01/13 09:43:57 by aerrfig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog()
{
	this->type = "WrongDog";
	std::cout << "WrongDog Constructor Called\n";
}

WrongDog::WrongDog(const WrongDog &src) : WrongAnimal()
{
	this->type = src.type;
}

WrongDog::~WrongDog()
{
	std::cout << "WrongDog Destructor Called\n";
}

void WrongDog::makeSound() const
{
	std::cout << "Wrong Dog sound\n";
}

WrongDog &WrongDog::operator=(WrongDog const &rhs)
{
	(void)rhs;
	return *this;
}
