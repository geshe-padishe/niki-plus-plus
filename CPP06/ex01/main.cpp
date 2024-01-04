#include "Serializer.hpp"

int main ()
{
    Data            data;
    Data            *ptr = &data;
    uintptr_t       rawptr;

    rawptr = Serializer::serialize(ptr);
    std::cout << "rawptr = 0x" << std::hex << rawptr << std::endl;
    ptr = Serializer::deserialize(rawptr);
    std::cout << "data   = " << ptr << std::endl;
}   