/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrfig <aerrfig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 11:07:58 by aerrfig           #+#    #+#             */
/*   Updated: 2025/01/14 14:41:57 by aerrfig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "../Animal/AAnimal.hpp"
#include "../Brain/Brain.hpp"

class Cat : public AAnimal
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