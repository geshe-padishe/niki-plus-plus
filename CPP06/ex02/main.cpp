#include "Base.hpp"

Base * generate(void)
{
    std::srand(static_cast<unsigned int>(std::time(NULL)));
    int randomValue = std::rand() % 3;

    std::cout << "random Value = " << randomValue << std::endl;
    switch (randomValue)
    {
        case 0:
            return new A();
        case 1:
            return new B();
        case 2:
            return new C();
        default:
            return NULL;
    }
}

void identify(Base* p)
{
    if (A* a = dynamic_cast<A*>(p))
        std::cout << "A type" << std::endl;
    else if (B* b = dynamic_cast<B*>(p))
        std::cout << "B type" << std::endl;
    else if (C* c = dynamic_cast<C*>(p))
        std::cout << "C type" << std::endl;
    else
        std::cerr << "Unknown type" << std::endl;
}

void identify(Base& p)
{
    try {
        A& a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "A type" << std::endl;
    } catch (const std::exception&) {
        try {
            B& b = dynamic_cast<B&>(p);
            (void)b;
            std::cout << "B type" << std::endl;
        } catch (const std::exception&) {
            try {
                C& c = dynamic_cast<C&>(p);
                (void)c;
                std::cout << "C type" << std::endl;
            } catch (const std::exception&) {
                std::cerr << "Unknown type" << std::endl;
            }
        }
    }
}

int main()
{
    Base *base = generate();
    Base *base1 = generate();
    Base *base2 = generate();
    Base *base3 = generate();

    identify(base);
    identify(base1);
    identify(base2);
    identify(base3);
    identify(*base);
    identify(*base1);
    identify(*base2);
    identify(*base3);
}