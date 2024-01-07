#pragma once

#include <string>

class Entity {
public:
	virtual void rename(std::string newName) = 0;
	virtual std::string getName() = 0;
};
