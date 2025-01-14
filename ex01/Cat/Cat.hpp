/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrfig <aerrfig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 11:07:58 by aerrfig           #+#    #+#             */
/*   Updated: 2025/01/14 14:40:49 by aerrfig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "../Animal/Animal.hpp"
#include "../Brain/Brain.hpp"

class Cat : public Animal
{
private:
    Brain *brains;
public:
    Cat();
    Cat(Cat const &src);
    void makeSound() const;
    Brain *getBrain() const;
    ~Cat();
    Cat &operator=(Cat const &src);
};

#endif