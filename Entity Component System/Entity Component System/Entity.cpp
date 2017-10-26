#include "Entity.h"
#include <typeinfo>

Entity::Entity() {
	
}

void Entity::addComponent(Component c) {
	components.push_back(c);
}

void Entity::removeComponent(Component c) {
	// need to test
	for (int i = 0; i < components.size(); i++) {
		if (typeid(components.at(i)) == typeid(c)) {
			components.erase(components.begin() + i);
		}
	}
}

std::vector<Component> Entity::getComponents() {
	return components;
}