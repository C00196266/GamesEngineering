#ifndef RELOADCOMMAND_H
#define RELOADCOMMAND_H

#include "Command.h"

class ReloadCommand : public Command
{
public:
	virtual void execute();
private:
	void reload();
};

#endif
