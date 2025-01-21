/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrfig <aerrfig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 11:07:55 by aerrfig           #+#    #+#             */
/*   Updated: 2025/01/13 09:44:15 by aerrfig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "WrongCat Constructor Called\n";
}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal()
{
	this->type = src.type;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor Called\n";
}

void WrongCat::makeSound() const
{
	std::cout << "Wrong Cat Sound\n";
}

WrongCat &WrongCat::operator=(WrongCat const &rhs)
{
	this->type = rhs.type;
	return *this;
}
