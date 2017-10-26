#include "HealthComponent.h"

HealthComponent::HealthComponent() {
	health = 100;
}

HealthComponent::HealthComponent(int h) {
	health = h;
}

int HealthComponent::getHealth() {
	return health;
}

void HealthComponent::setHealth(int newHealth) {
	health = newHealth;
}