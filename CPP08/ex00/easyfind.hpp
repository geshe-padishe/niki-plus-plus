#ifndef EASYFIND_HPP
# define EASYFIND_HPP

class ValueNotFound : public std::exception {
public:
   const char* what() const throw() {
       return "Value not found inside container";
   }
};

template <typename T>
void easyFind(T & container, int nb)
{
    typename T::iterator result = std::find(container.begin(), container.end(), nb);
    if (result == container.end())
        throw ValueNotFound();
    else
        std::cout << nb << " found inside container" << std::endl;
}

#endif