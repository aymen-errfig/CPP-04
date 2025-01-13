/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrfig <aerrfig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 11:07:55 by aerrfig           #+#    #+#             */
/*   Updated: 2025/01/13 10:04:37 by aerrfig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Dog Constructor Called\n";
}

Dog::Dog(const Dog &src)
{
	this->type = src.type;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor Called\n";
}

void Dog::makeSound() const
{
	std::cout << "dog bark\n";
}

Dog &Dog::operator=(Dog const &rhs)
{
	(void)rhs;
	return *this;
}
