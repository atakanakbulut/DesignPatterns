#ifndef FACTORY_H
#define FACTORY_H

#include <iostream>
#include <string.h>


class IFactoryInterface
{

public:
    IFactoryInterface(char *fn)
    {
        strcpy(name, fn);
    }
    virtual void Open() = 0;
    virtual void Close() = 0;
    char *GetName()
    {
        return name;
    }
  private:
    char name[20];
};

class Factory : public IFactoryInterface
{
public:
    Factory(char *fn): IFactoryInterface(fn){}
    void Open()
    {
        std::cout << "   Factory: create" << std::endl;
    }
    void Close()
    {
        std::cout << "   Factory: destruc." << std::endl;
    }

};

class Application
{
  public:
    Application(): _index(0)
    {
        std::cout << "Application: ctor" << std::endl;
    }

    void createDevice(char *name)
    {
        devices[_index] = Create(name);
        devices[_index++]->Open();
    }

    void deleteDevice(char *name)
    {
        
    }

    void getDevices()
    {
        for (int i = 0; i < _index; i++)
        std::cout << "   " << devices[i]->GetName() << std::endl;
    };

    IFactoryInterface *Create(char *fn)
    {
        return new Factory(fn);
    }

  private:
    int _index;
    IFactoryInterface *devices[10];
};


#endif
