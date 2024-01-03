#pragma once
#include <string>


//FileManagerConfig
class FMConfig {
	std::string configPath;
	std::string projectLocation;
	void parseConfig(std::string configPath);
public:
	FMConfig(std::string configPath);
};
