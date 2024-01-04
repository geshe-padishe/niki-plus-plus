#include "iter.hpp"

int main()
{
    int     intArray[] = {200, 300, -42, 42, 0};
    char    charArray[] = {'n', 'i', 'k', 'i'};
    size_t  arraySize;
    
    arraySize = sizeof(intArray) / sizeof(int);
    iter(intArray, arraySize, printT<int>);
    std::cout << std::endl;

    arraySize = sizeof(charArray) / sizeof(char);
    iter(charArray, arraySize, printT<char>);
    std::cout << std::endl;

    arraySize = sizeof(intArray) / sizeof(int);
    iter(intArray, arraySize, incrementT<int>);
    std::cout << std::endl;

    arraySize = sizeof(charArray) / sizeof(char);
    iter(charArray, arraySize, incrementT<char>);
    std::cout << std::endl;

    arraySize = sizeof(intArray) / sizeof(int);
    iter(intArray, arraySize, printT<int>);
    std::cout << std::endl;

    arraySize = sizeof(charArray) / sizeof(char);
    iter(charArray, arraySize, printT<char>);
    std::cout << std::endl;


    return 0;
}