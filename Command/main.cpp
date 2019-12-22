#include <iostream>
#include "Command.h"

int main()
{
    std::cout << "Command design pattern" << std::endl;

	// RECEIVER 
	Data *data = new Data;

	// CONCRETE
	EnableTxMode *txOn = new EnableTxMode(data);
	EnableRxMode *rxOn = new EnableRxMode(data);

	// INVOLKER
	RemoteControl *rc = new RemoteControl;

    // USER CLIENT
    rc->sendCommand(txOn);
    rc->execute();
    rc->sendCommand(rxOn);
    rc->execute();
    rc->sendCommand(txOn);
    rc->execute();
    rc->sendCommand(rxOn);
    rc->execute();

	delete data, txOn, rxOn, rc; 

    return 0;
}