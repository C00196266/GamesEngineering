#include <vector>
#include "CharacterFactory.h"
#include "HandleToCharacter.h"
#include "PlayerBridgePattern.h"
#include "GraphicProxy.h"

int main() {
	// Abstract Factory

	Factory* factory = new CharacterFactory;
	vector<CharacterAbstract*> characters;

	characters.push_back(factory->CreatePlayer());
	characters.push_back(factory->CreateOpponents());

	for (int i = 0; i < characters.size(); i++) {
		characters[i]->draw();
	}

	cout << endl;

	// Handle Class

	HandleToCharacter handle;
	handle->Print();

	cout << endl;

	// Bridge Pattern

	DrawAPI* api = new DrawImpl();
	CharacterBridgePattern* characterBridgePattern = new PlayerBridgePattern(api);
	
	characterBridgePattern->draw();
	//cin.get();

	cout << endl;

	// Proxy Implementation

	GraphicProxy gp;
	gp.draw();

	cout << endl;

	system("PAUSE");
}
