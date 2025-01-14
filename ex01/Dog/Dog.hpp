/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrfig <aerrfig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 11:07:58 by aerrfig           #+#    #+#             */
/*   Updated: 2025/01/14 13:39:02 by aerrfig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "../Animal/Animal.hpp"
#include "../Brain/Brain.hpp"

class Dog : public Animal
{
private:
    Brain *brains;
public:
    Dog();
    Dog(Dog const &src);
    void makeSound() const;
    Brain *getBrain() const;
    ~Dog();
    Dog& operator=(const Dog &src);
};

#endif