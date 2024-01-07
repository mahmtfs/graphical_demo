#pragma once
#include "../config/config.h"

class ProjectConfig : public Config {
	std::string name;
	std::string location;
	std::string path;
	void parseConfig(std::string configPath);
public:
	ProjectConfig(std::string configPath);
	void rename(std::string newName);
	std::string getName() { return name; };
	std::string getLocation() { return location; };
};
