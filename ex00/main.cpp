/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrfig <aerrfig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 09:54:31 by aerrfig           #+#    #+#             */
/*   Updated: 2025/01/13 10:05:35 by aerrfig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int main()
{

    const Animal *meta = new Animal();
    Animal *j = new Dog();
    const Animal *i = new Cat();

    std::cout << j->getType() << " makes sound: ";
    j->makeSound();

    std::cout << i->getType() << " makes sound: ";
    i->makeSound();

    std::cout << meta->getType() << " makes sound: ";
    meta->makeSound();

    const WrongAnimal *wrongMeta = new WrongAnimal();
    const WrongAnimal *wrongCat = new WrongCat();

    std::cout << wrongMeta->getType() << " makes sound: ";
    wrongMeta->makeSound();

    std::cout << wrongCat->getType() << " makes sound: ";
    wrongCat->makeSound();

    return 0;
}
