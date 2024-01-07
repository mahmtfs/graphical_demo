#pragma once

#include <string>
#include <list>
#include "../entity.h"
#include "../world.h"
#include "../../includes/config/projectconfig/projectconfig.h"

class Project : Entity {
	ProjectConfig* config;
	std::list<World*> worlds;
public:
	Project(ProjectConfig *config);
	ProjectConfig* getConfig() { return config; };
	void rename(std::string newName) { config->rename(newName); };
	std::string getName() { return config->getName(); };
};
