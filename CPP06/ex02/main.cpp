#include "Base.hpp"

Base * generate(void)
{
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    int randomValue = std::rand() % 3;

    switch (randomValue)
    {
        case 0:
            return new A();
        case 1:
            return new B();
        case 2:
            return new C();
        default:
            return nullptr;
    }
}

void identify(Base* p);
{
    switch(dynamic_cast<Base*>(p)) {
        case dynamic_cast<A*>(p):
            std::cout << "A instance" << std::endl;
        case dynamic_cast<B*>(p):
            std::cout << "B instance" << std::endl;
        case dynamic_cast<C*>(p):
            std::cout << "C instance" << std::endl;
        default: 
            std::cerr << "Unknown type" << std::endl;
    }
}

void identify(Base& p);
{
    try {
        switch(dynamic_cast<Base&>(p)) {
            case dynamic_cast<A&>(p):
                std::cout << "A instance" << std::endl;
            case dynamic_cast<B&>(p):
                std::cout << "B instance" << std::endl;
            case dynamic_cast<C&>(p):
                std::cout << "C instance" << std::endl;
            default: 
                std::cerr << "Unknown type" << std::endl;
        }
    }
    catch (const std::bad_cast&) {
        std::cerr << "Unknown type" << std::endl;
    }

}

int main()
{
    
}