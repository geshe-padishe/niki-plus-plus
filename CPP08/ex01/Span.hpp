#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# include <algorithm>
# include <stdexcept>
# include <ctime>
class Span
{
    private:
        unsigned int size;
        std::vector<int> numbers;

    public:
        Span(unsigned int maxSize);
        Span();
        ~Span();
        Span(const Span& other);
        void    addNumbers(std::vector<int>::const_iterator start, std::vector<int>::const_iterator end);
        void    addNumber(int number);
        int     shortestSpan();
        int     longestSpan();
        void    printSpan();
        
        unsigned int                getSize();
        class NotEnoughNumbers : public std::exception {
        public:
            const char* what() const throw() {
                return "Not enough numbers";
            }
        };
        class ContainerFull : public std::exception {
        public:
            const char* what() const throw() {
                return "Container full";
             }
        };
        Span &				operator=( Span const & rhs );

};

#endif /* ************************************************************ SPAN_H */