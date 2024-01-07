#include "projectconfig.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <rapidxml.hpp>
#include <rapidxml_utils.hpp>
#include <rapidxml_print.hpp>

ProjectConfig::ProjectConfig(std::string configPath) {
	parseConfig(configPath);
}

void ProjectConfig::parseConfig(std::string configPath) {
	path = configPath;
	rapidxml::file<> xmlFile(path.c_str());
	rapidxml::xml_document<> doc;
	doc.parse<0>(xmlFile.data());
	rapidxml::xml_node<> *root = doc.first_node("project");
	name = root->first_node("name")->value();
	location = root->first_node("location")->value();
}

void ProjectConfig::rename(std::string newName) {
	name = newName;
	rapidxml::file<> xmlFile(path.c_str());
	rapidxml::xml_document<> doc;
	doc.parse<0x20 | 0x1>(xmlFile.data());
	rapidxml::xml_node<>* nameNode = doc.first_node("project")->first_node("name");
	nameNode->value(name.c_str());
	std::ofstream outFile(path);
	outFile << doc;
	outFile.close();
}
