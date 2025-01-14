#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
private:
	std::string ideas[100];

public:
	Brain();
	Brain(Brain const &src);
	std::string getIdeaById(size_t id) const;
	void setIdea(size_t id, const std::string &newIdea);
	~Brain();

	Brain &operator=(Brain const &rhs);
};

#endif