#include "HealthComponent.h"

HealthComponent::HealthComponent() {
	id = "health";
	health = 100;
}

HealthComponent::HealthComponent(int h) {
	id = "health";
	health = h;
}

int HealthComponent::getInt() {
	return health;
}

void HealthComponent::setInt(int newHealth) {
	health = newHealth;
}