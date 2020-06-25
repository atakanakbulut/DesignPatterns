#include <iostream>
#include <stdlib.h>

uint8_t myFlag = 0;

static const struct flagCapsule
{
    static const uint8_t DATA_ENABLE_1 = 0x01;
    static const uint8_t DATA_ENABLE_2	= 0x02;
    static const uint8_t DATA_ENABLE_3	= 0x04;
    static const uint8_t DATA_ENABLE_4	= 0x08;
    static const uint8_t DATA_ENABLE_5	= 0x10;
    static const uint8_t DATA_ENABLE_6 = 0x20;
    static const uint8_t DATA_ENABLE_7 = 0x40;
    static const uint8_t DATA_ENABLE_8 = 0x80;
}flagCapsule;

int main()
{
    // ENABLE DATA 1 AND 5
    myFlag |= flagCapsule::DATA_ENABLE_1;
    myFlag |= flagCapsule::DATA_ENABLE_5;

    // CHECK ALL BITS
    if(myFlag & flagCapsule::DATA_ENABLE_1)
        std::cout << "flag1 up" << std::endl;
    if(myFlag & flagCapsule::DATA_ENABLE_2)
        std::cout << "flag2 up" << std::endl;
    if(myFlag & flagCapsule::DATA_ENABLE_3)
        std::cout << "flag3 up" << std::endl;
    if(myFlag & flagCapsule::DATA_ENABLE_4)
        std::cout << "flag4 up" << std::endl;
    if(myFlag & flagCapsule::DATA_ENABLE_5)
        std::cout << "flag5 up" << std::endl;
    if(myFlag & flagCapsule::DATA_ENABLE_6)
        std::cout << "flag6 up" << std::endl;
    if(myFlag & flagCapsule::DATA_ENABLE_7)
        std::cout << "flag7 up" << std::endl;
    if(myFlag & flagCapsule::DATA_ENABLE_8)
        std::cout << "flag8 up" << std::endl;

    return 0;
}

