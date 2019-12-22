#include <iostream>
#include <algorithm>
#include <array>
#include "AbstractFactory.h"


int main()
{
    std::cout << "Abstract Factory Methode" << std::endl;
    
    DeviceFactory* factory = new ElectronicFactory;

    std::array<Device*, 5>  willCreateDevices 
    {
        factory->createMainBoardInstance(),
        factory->createDeviceSystemOnChipInstance(),
        factory->createDeviceMultiplexerInstance(),
        factory->createComponentAntenneInstance(),
        factory->createDeviceCudaGPUInstance()
    };
 
    std::for_each(willCreateDevices.begin(), willCreateDevices.end(), [](Device *devices){ devices->createDevice(); });

    return 0;
}