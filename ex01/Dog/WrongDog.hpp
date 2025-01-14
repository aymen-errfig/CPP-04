/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrfig <aerrfig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 11:07:58 by aerrfig           #+#    #+#             */
/*   Updated: 2025/01/13 12:19:46 by aerrfig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGDOG_HPP
#define WRONGDOG_HPP

#include "../Animal/WrongAnimal.hpp"

class WrongDog : public WrongAnimal
{
public:
    WrongDog();
    WrongDog(WrongDog const &src);
    void makeSound() const;
    virtual ~WrongDog();
    WrongDog &operator=(WrongDog const &rhs);
};

#endif