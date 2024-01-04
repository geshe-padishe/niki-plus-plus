#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template <typename T, typename Func>
void iter(T* array, size_t len, Func function)
{
    if (array == NULL)
    {
        std::cerr << "Array is NULL" << std::endl;
    }
    for (size_t i = 0; i < len; ++i)
        function(array[i]);
}

template <typename T>
void printT(const T& t)
{
    std::cout << t << " ";
}

template <typename T>
void incrementT(T& t)
{
    t++;
}


#endif