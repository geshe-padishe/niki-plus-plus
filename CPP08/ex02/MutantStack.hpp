#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <vector>
# include <algorithm>
# include <stdexcept>
# include <stack>
# include <list>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack<T>() {}
		MutantStack<T>( const MutantStack & src ) { *this = src; }
		~MutantStack<T>() {}
		MutantStack<T> &				operator=( MutantStack<T> const & rhs )
		{
			if ( this != &rhs )
			{
				this->c = rhs.c;
				return *this;
			}
			return *this;
		}
		typedef typename std::stack<T>::container_type::iterator iterator;
	
		iterator begin() { return this->c.begin(); }
		iterator end() { return this->c.end(); }
};

template <typename T>
std::ostream &			operator<<( std::ostream & o, MutantStack<T> const & i )
{
	(void)i;
	//o << "Value = " << i.getValue();
	return o;
}

#endif /* ***************************************************** MUTANTSTACK_H */