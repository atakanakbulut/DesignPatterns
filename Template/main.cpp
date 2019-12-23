#include <iostream>
#include "Template.h"
#include <algorithm>

/*
With modern C++ features (11 and above) you can handle such polymorphic arrays with std::vector<std::unique_ptr<Base>>. 
vector allows automatic destruction and extension, and unique_ptr will destroy the object on its own destruction:
*/

int main() 
{
    std::cout << "Template Design pattern\n\n";

    Container *array[] = { new Real(), new Fake() }; // can be &Real() , &Fake()
 
   for (unsigned int i = 0; i < 2; i++)
   {
    array[i]->show();
    std::cout << i << " Completed.\n\n";
   }
    return 0;
}