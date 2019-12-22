#ifndef ABSTRACT_FACTORY_H
#define ABSTRACT_FACTORY_H

#include <iostream>

class Device 
{

public:
    Device() { deviceid = totaldevice++;}
    virtual void createDevice() = 0; // pure 
protected:
    int deviceid;
    static int totaldevice;
};

int Device::totaldevice = 0;

class DeviceMainBoard : public Device
{
public:
    void createDevice() {
        std::cout << deviceid << " Main board created." << std::endl;
    }
};

class DeviceSystemOnChip : public Device
{
public:
    void createDevice() {
        std::cout << deviceid << " System On Chip created." << std::endl;
    }
};

class DeviceMultiplexer : public Device
{
public:
    void createDevice() {
        std::cout << deviceid << " Multiplexer created." << std::endl;
    }
};

class DeviceCudaGPU : public Device
{
public:
    void createDevice() {
        std::cout << deviceid << " Cuda GPU created." << std::endl;
    }
};

class ComponentScrew : public Device
{
public:
    void createDevice() {
        std::cout << deviceid << " Screw created." << std::endl;
    }
};

class ComponentAntenne : public Device
{
public:
    void createDevice() {
        std::cout << deviceid << " Antenna created." << std::endl;
    }
};

class DeviceFactory {
  public:
    virtual Device* createMainBoardInstance() = 0;
    virtual Device* createDeviceSystemOnChipInstance() = 0;
    virtual Device* createDeviceMultiplexerInstance() = 0;
    virtual Device* createDeviceCudaGPUInstance() = 0;
    virtual Device* createComponentScrewInstance() = 0;
    virtual Device* createComponentAntenneInstance() = 0;
};

class ElectronicFactory : public DeviceFactory {
  
public:

    Device* createMainBoardInstance() {
      return new DeviceMainBoard;
    }

    Device* createDeviceSystemOnChipInstance() {
      return new DeviceSystemOnChip;
    }

    Device* createDeviceMultiplexerInstance() {
      return new DeviceMultiplexer;
    }

    Device* createDeviceCudaGPUInstance() {
      return new DeviceCudaGPU;
    }

    Device *createComponentScrewInstance()
    {
        return new ComponentScrew;
    }

    Device *createComponentAntenneInstance()
    {
        return new ComponentAntenne;
    }
};

#endif