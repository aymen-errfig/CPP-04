/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrfig <aerrfig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 11:07:55 by aerrfig           #+#    #+#             */
/*   Updated: 2025/01/14 14:36:30 by aerrfig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	type = "No Type";
	std::cout << "AAnimal Constructor Called\n";
}

AAnimal::AAnimal(const AAnimal &src)
{
	this->type = src.type;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal Destructor Called\n";
}

std::string AAnimal::getType() const
{
	return (this->type);
}

AAnimal &AAnimal::operator=(AAnimal const &rhs)
{
	this->type = rhs.type;
	return *this;
}
