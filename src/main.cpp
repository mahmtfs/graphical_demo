#include <iostream>
#include <rapidxml.hpp>
#include <rapidxml_utils.hpp>

int main() {
	rapidxml::file<> xmlFile("./config/project.xml");
	rapidxml::xml_document<> doc;
	doc.parse<0>(xmlFile.data());
	std::cout << "Name of my first node is: " << doc.first_node()->name() << "\n";
	std::cout << "first attr: " << doc.first_node()->first_node()->value();
	return 0;
}
