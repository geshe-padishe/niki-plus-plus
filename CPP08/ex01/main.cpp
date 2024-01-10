#include "Span.hpp"

int main()
{
    std::srand(static_cast<unsigned>(time(0)));
    Span sp = Span(5);
    Span sp2 = Span(5);
    Span sp3;
    std::vector<int> v(4);

    std::generate(v.begin(), v.end(), std::rand);
    sp.addNumber(-42);
    sp.addNumber(103);  
    sp.addNumber(1);
    sp.addNumber(10);
    sp.addNumber(-43214312);
    try {
        sp.addNumber(0);
    }
    catch (const std::exception& e) {
        std::cerr << "Caught exception: " << e.what() << '\n';
    }
    sp.printSpan();
    sp2.addNumbers(v.begin(), v.end());
    try {
        sp2.addNumbers(v.begin(), v.end());
    }
    catch (const std::exception& e) {
        std::cerr << "Caught exception: " << e.what() << '\n';
    }
    sp2.printSpan();
    sp3 = sp2;
    sp3.printSpan();
    std::cout << std::endl;
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    std::cout << sp2.shortestSpan() << std::endl;
    std::cout << sp2.longestSpan() << std::endl;
    return 1;
}

// int main()
// {
//     std::srand(static_cast<unsigned>(time(0)));
//     Span sp = Span(10000);
//     std::vector<int> vc(10000);
//     std::generate(vc.begin(), vc.end(), std::rand);
//     sp.addNumbers(vc.begin(), vc.end());
//     sp.printSpan();
// }