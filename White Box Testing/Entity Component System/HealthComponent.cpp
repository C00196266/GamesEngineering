#include "HealthComponent.h"

HealthComponent::HealthComponent() {
	id = "health";
	health = 100;
}

HealthComponent::HealthComponent(int h) {
	id = "health";
	health = h;
}

int HealthComponent::getHealth() {
	return health;
}

void HealthComponent::setHealth(int newHealth) {
	health = newHealth;
	if (health < 0) {
		health = 0;
	}
}