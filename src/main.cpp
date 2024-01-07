#include <iostream>
#include "../includes/config/projectconfig/projectconfig.h"
#include "../includes/entities/project/project.h"


int main() {
	ProjectConfig pcfg("C:/Portfolio/projects/graphicalDemo/demo/config/project.xml");
	Project p(&pcfg);
	std::cout << "Old name:\n";
	std::cout << p.getName() << "\n";
	p.rename("oldName");
	std::cout << "New name:\n";
	std::cout << p.getName() << "\n";
	return 0;
}

