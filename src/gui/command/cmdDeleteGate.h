
#pragma once
#include "klsCommand.h"
#include <stack>

// cmdDeleteGate - Deletes a gate
class cmdDeleteGate : public klsCommand {
public:
	cmdDeleteGate(GUICircuit* gCircuit, GUICanvas* gCanvas, IDType gateId);

	virtual ~cmdDeleteGate();

	bool Do();

	bool Undo();

private:
		IDType gateId;
		std::stack<klsCommand *> cmdList;
		std::string gateType;
};