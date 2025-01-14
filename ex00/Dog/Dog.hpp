/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrfig <aerrfig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 11:07:58 by aerrfig           #+#    #+#             */
/*   Updated: 2025/01/13 12:19:25 by aerrfig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "../Animal/Animal.hpp"

class Dog : public Animal
{
public:
    Dog();
    Dog(Dog const &src);
    void makeSound() const;
    ~Dog();
    Dog &operator=(Dog const &rhs);
};

#endif