#include "Config.h"

Config* Config::m_instance = 0;

Config::Config()
{}

Config* Config::getInstance()
{
    if (m_instance == 0)
    {
        m_instance = new Config();
    }

    return m_instance; // return always same address
}

void Config::fooFunction()
{
    std::cout << "Foo function address "  << this << std::endl;
}
