/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrfig <aerrfig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 09:54:31 by aerrfig           #+#    #+#             */
/*   Updated: 2025/01/14 15:19:39 by aerrfig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog/Dog.hpp"
#include "Cat/Cat.hpp"

int main()
{
    const int arraySize = 30;
    Animal *animals[arraySize];

    for (int i = 0; i < arraySize; ++i)
    {
        if (i % 2 == 0)
        {
            animals[i] = new Dog();
        }
        else
        {
            animals[i] = new Cat();
        }
    }

    for (int i = 0; i < arraySize; ++i)
    {
        animals[i]->makeSound();
    }

    for (int i = 0; i < arraySize; ++i)
    {
        delete animals[i];
    }

    return 0;
}