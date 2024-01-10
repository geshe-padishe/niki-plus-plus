#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span(unsigned int n): size(n) {}

Span::Span(): size(0) {}

Span::Span(const Span& other) : size(other.size)
{
    for(std::vector<int>::const_iterator it = other.numbers.begin(); it != other.numbers.end(); ++it) {
        numbers.push_back(*it);
    }
}
Span::~Span() {}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &				Span::operator=( Span const & rhs )
{
	if ( this != &rhs )
	{   
        this->numbers.clear();
        this->size = rhs.size;
        this->addNumbers(rhs.numbers.begin(), rhs.numbers.end());
    }
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/
void    Span::addNumbers(std::vector<int>::const_iterator start, std::vector<int>::const_iterator end)
{
    if (end < start)
        return;
    for (std::vector<int>::const_iterator it = start; it != end; ++it)
        this->addNumber(*it);
    //numbers.insert(numbers.begin(), start, end);
}

void    Span::addNumber(int number)
{
    if (numbers.size() >= size)
        throw ContainerFull();
    numbers.push_back(number);
}

int Span::shortestSpan()
{
    int                         tmp = 0;

    if (numbers.size() <= 1)
        throw NotEnoughNumbers();
    std::sort(numbers.begin(), numbers.end());

    std::vector<int>::iterator  it = numbers.begin() + 1;
    int                         span = numbers[1] - numbers[0];

    for (; it != numbers.end() - 1; it++)
    {
        tmp  = -1  * (*it - *(it + 1));
            if (tmp < span)
                span = tmp;
    }
    return span;
}

int Span::longestSpan()
{
    if (numbers.size() <= 1)
        throw NotEnoughNumbers();
    std::sort(numbers.begin(), numbers.end());
    return numbers.back() - numbers.front();
}

void    Span::printSpan()
{
    for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

unsigned int    Span::getSize()
{
    return (size);
}

/* ************************************************************************** */