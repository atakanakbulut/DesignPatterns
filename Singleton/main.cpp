#include <iostream>
#include "Config.h"

int main()
{
   std::cout << "Foo program initlized" << std::endl;
   Config* instance1 = Config::getInstance(); // Ok
   Config* instance2 = Config::getInstance();
   
   std::cout << "instance 1 " <<   instance1 << std::endl; 
   std::cout << "instance 2 " <<   instance2 << std::endl; 

   Config::getInstance()->fooFunction();
   
    return 0;
}
