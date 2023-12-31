#pragma once

#include <string>

class Entity {
	std::string name;
public:
	void rename(std::string newName) { this->name = newName; };
	std::string getName() { return this->name; };

};