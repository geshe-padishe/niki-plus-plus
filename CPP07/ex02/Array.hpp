#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template <typename T>
class Array
{
	public:
		Array(): _size(0), data(NULL) {};
   		Array(unsigned int n) : _size(n) { data = new T[_size]; }
		Array( const Array & src ): _size(src.size())
		{
			data = new T[_size];
			for (unsigned int i = 0; i < _size; i++)
				data[i] = src.data[i];
		}
		~Array()
		{
			if (data != NULL)
			{
				delete [] data;
				data = NULL;
			}
		}
		Array &		operator=( Array const & rhs )
		{
			if ( this != &rhs )
			{
				this->~Array();
				new (this) Array(rhs);
			}
			return *this;
		}
		T &			operator[] (long index)
		{
			if (index >= _size || index < 0)
				throw std::out_of_range("Index is invalid");
			return data[index];
		}
		unsigned int	size() const { return _size; }
		//void printArray()
		//{
		//    for (unsigned int i = 0; i < this->size(); i++)
		//        std::cout << data[i] << " ";
		//    std::cout << std::endl;
		//}

	private:
        long			_size;
	    T				*data;

};

#endif /* *********************************************************** ARRAY_H */ 