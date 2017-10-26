#pragma once

#include "Component.h"

class HealthComponent : public Component {
private:
	int health;
public:
	HealthComponent();
	HealthComponent(int h);

	int getHealth();
	void setHealth(int newHealth);
};