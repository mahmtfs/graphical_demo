#pragma once
#include <string>

class Config {
protected:
	virtual void parseConfig(std::string configPath) = 0;
};
