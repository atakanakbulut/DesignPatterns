#include <iostream>
#include "Factory.h"

int main()
{
    std::cout << "Factory Method design pattern" << std::endl;

  Application application;

  application.createDevice("device1");
  application.createDevice("device2");
  application.getDevices();
    return 0;
}
