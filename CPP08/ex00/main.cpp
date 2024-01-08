#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <deque>
#include <map>
#include "easyfind.hpp"


int main()
{
    std::deque<int> deque;
    std::vector<int> vec;
    std::list<int> list;
    
    vec.push_back(1);
    vec.push_back(20);
    vec.push_back(-40);
    deque.push_back(20);
    deque.push_back(-40);
    deque.push_back(1);
    list.push_back(1);
    list.push_back(20);
    list.push_back(-40);

    try {
        easyFind(vec, 20);
    }
    catch (const std::exception& e) {
        std::cerr << "Caught exception: " << e.what() << '\n'; 
    }
    try {
        easyFind(deque, 20);
    }
    catch (const std::exception& e) {
        std::cerr << "Caught exception: " << e.what() << '\n'; 
    }
    try {
        easyFind(list, 20);
    }
    catch (const std::exception& e) {
        std::cerr << "Caught exception: " << e.what() << '\n'; 
    }
    return 0;
}