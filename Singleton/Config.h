#ifndef CONFIG_H
#define CONFIG_H

#include <iostream>

class Config
{

public:
    static Config* getInstance(); // get instance
    void fooFunction();
private:
    Config(); // private constructor !!
    static Config* m_instance;
};

#endif
