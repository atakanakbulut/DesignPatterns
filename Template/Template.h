#ifndef TEMPLATE_H
#define TEMPLATE_H

#include <iostream>

class Container
{

    void One() { std::cout << " Firts " << std::endl; }
    void Two() { std::cout << " Third " << std::endl; }
    void Three() { std::cout << " Three " << std::endl; }
    virtual void unknownFour() = 0;
    virtual void unknownFive() = 0;
public:
    void show()
    {
        One();  
        Two();
        Three();
        unknownFour();
        unknownFive();
    }
};

class Real : public Container // Real class
{
    virtual void unknownFour() { std::cout << " Four " << std::endl; }
    virtual void unknownFive() { std::cout << " Five " << std::endl; }
};

class Fake : public Container // Fake class
{
    virtual void unknownFour() { std::cout << " Nine " << std::endl; }
    virtual void unknownFive() { std::cout << " Ten " << std::endl; }
};

#endif