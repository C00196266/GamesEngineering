#include "MacroCommand.h"

MacroCommand::MacroCommand() {
	commands = new std::list<Command*>;
}

void MacroCommand::add(Command* command) {
	commands->push_back(command);
}

void MacroCommand::remove() {
	if (!commands->empty()) {
		commands->pop_front();
	}
}

void MacroCommand::execute() {
	if (!commands->empty()) {
		std::list<Command*>::iterator i = commands->begin();
	
		for (auto &i : *commands) {
			Command *c = i;
			c->execute();
		}
	}
	else {
		std::cout << "No commands to execute." << std::endl;
	}
}