#ifndef MACROCOMMAND_H
#define MACROCOMMAND_H

#include "Command.h"
#include <list>

class MacroCommand : public Command
{
public:
	MacroCommand();
	virtual ~MacroCommand() {};

	virtual void add(Command* command);
	virtual void remove();
	virtual void execute();

private:
	std::list<Command*>* commands;
};

#endif