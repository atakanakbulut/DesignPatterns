#ifndef COMMAND_H
#define COMMAND_H

#include <iostream>
using namespace std;


//=====================================================================================//
//    Receiver     <  Command    <      Concrete commamd <  İnvolker < Client          //
// (send command)  (pure function)     (calling command)  (Calling)  (like wrapper)    //
//=====================================================================================//
 

// COMMAND PURE FUNCTION
class Command
{
public:
	virtual void sendCmd() = 0;
};
 
// RECEIVER
class Data
{
public:
    void txMode() { std::cout << "Data sending..." << std::endl; } // EXAMPLE : CAN BE TCP/IP, RS232, I2C, PACKET RADIO 
    void rxMode() { std::cout << "Data receiving..." << std::endl; } // EXAMPLE : CAN BE TCP/IP, RS232, I2C, PACKET RADIO  
}; 

// CONCRETE COMMAND FOR TX
class EnableTxMode : public Command
{
public:
    EnableTxMode(Data *data) : mData(data) {}
    void sendCmd() { mData->txMode(); }
private:
    Data *mData;
};

// CONCRETE COMMAND FOR RX
class EnableRxMode : public Command
{
public:
    EnableRxMode(Data *data) : mData(data) {}
    void sendCmd() { mData->rxMode(); }
private:
    Data *mData;
};

// INVOLKER
class RemoteControl
{
public:
    void sendCommand(Command *cmd) { mCmd = cmd; }
    void execute() { mCmd->sendCmd(); }
private:
    Command *mCmd;
};

#endif