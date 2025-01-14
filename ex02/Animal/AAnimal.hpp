/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimalA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrfig <aerrfig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 11:07:58 by aerrfig           #+#    #+#             */
/*   Updated: 2025/01/13 11:32:47 by aerrfig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal
{
protected:
std::string type;
public:
	AAnimal();
	AAnimal(AAnimal const &src);
	std::string getType() const;
	virtual ~AAnimal();
	virtual void makeSound() const = 0;
	AAnimal &operator=(AAnimal const &rhs);
};

#endif