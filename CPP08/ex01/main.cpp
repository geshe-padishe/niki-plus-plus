#include "Span.hpp"

int main()
{
    std::srand(static_cast<unsigned>(time(0)));
    Span sp = Span(5);
    Span sp2 = Span(5);
    std::vector<int> v(5);

    std::generate(v.begin(), v.end(), std::rand);
    sp.addNumber(-42);
    sp.addNumber(103);  
    sp.addNumber(1);
    sp.addNumber(10);
    sp.addNumber(-43214312);
    try {
       // This is the try block
       // Some code here that might throw an exception
        //sp.addNumber(0);
    }
    catch (const std::exception& e) {
        // This is the catch block
        std::cerr << "Caught exception: " << e.what() << '\n';
    }
    sp.printSpan();
    sp2.addNumbers(v.begin(), v.end());
    sp2.printSpan();
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 1;
}