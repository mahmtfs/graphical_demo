#pragma once

#include <string>
#include <list>
#include "entity.h"
#include "world.h"

class Project : Entity {
	std::list<World*> worlds;

};
