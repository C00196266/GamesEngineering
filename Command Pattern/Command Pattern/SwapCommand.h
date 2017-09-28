#ifndef SWAPCOMMAND_H
#define SWAPCOMMAND_H

#include "Command.h"

class SwapCommand : public Command
{
public:
	virtual void execute();
private:
	void swap();
};

#endif