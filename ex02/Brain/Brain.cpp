/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerrfig <aerrfig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 12:06:44 by aerrfig           #+#    #+#             */
/*   Updated: 2025/01/14 12:32:59 by aerrfig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called\n";
}

Brain::Brain(const Brain &src)
{
	(void)src;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called\n";
}

std::string Brain::getIdeaById(size_t id) const
{
	if (id < 100)
		return this->ideas[id];
	else
		return "";
}

void Brain::setIdea(size_t id, const std::string &newIdea)
{
	if (id < 100)
		this->ideas[id] = newIdea;
}

Brain &Brain::operator=(Brain const &rhs)
{
	(void)rhs;
	return *this;
}
