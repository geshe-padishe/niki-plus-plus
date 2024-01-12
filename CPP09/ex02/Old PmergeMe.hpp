#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>
# include <vector>
# include <list>
# include <deque>
# include <cstdlib>
# include <ctime>
# include <iterator>
# include <algorithm>
# include <cstdio>
template<typename Type>
class FordPair
{
    public:
        FordPair(Type v)
            : _is_simple(true)
            , _value(v)
            , _fa(NULL),_fb(NULL)
            , _depth(0)
            , _destroy(false) {}
        FordPair(FordPair a, FordPair b)
            : _is_simple(false)
            , _value(0)
            , _fa(new FordPair(a))
            , _fb(new FordPair(b))
            , _depth(a._depth + 1)
            , _destroy(true)
        {
            if (_fa && _fb)
            {
                if ((*_fa) < (*_fb))
                    std::swap(*_fa, *_fb);
            }
        }
        FordPair(const FordPair& clone)
            : _is_simple(clone._is_simple)
            , _value(clone._value)
            , _fa(NULL),_fb(NULL)
            , _depth(clone._depth)
            , _destroy(false)

        {
            if (clone._fa && clone._fb)
            {
                _fa = new FordPair(*clone._fa);
                _fb = new FordPair(*clone._fb);
                _destroy = true;
            }
        }
        ~FordPair()
        {
            if (_destroy ==  true)
            {
                delete _fa;
                delete _fb;
            }
        }

        FordPair&    operator = (const FordPair& other)
        {
            _is_simple = other._is_simple;
            _value = other._value;
            if (_destroy && _fa && _fb)
            {
                delete _fa;
                delete _fb;
            }
            _fa = NULL;
            _fb = NULL;
            _destroy = false;
            if (other._fa && other._fb)
            {
                _fa = new FordPair(*other._fa);
                _fb = new FordPair(*other._fb);
                _destroy = true;
            }
            _depth = other._depth;
            return (*this);
        }
        bool        operator < (FordPair& other)
        {
            if(_is_simple == false && _fa && other._fa)
                return (*_fa < *other._fa);
            return (_value < other._value);
        }

        std::string toString(int num) const{
            char buffer[50];
            sprintf(buffer, "%d", num);
            return std::string(buffer);
        }
        std::string toString() const {
            if (_is_simple == false && _depth > 0)
                return _fa->toString() + " " + _fb->toString() + " ";
            else
                return toString(int(_value));
        }

        size_t      depth(void) { return (_depth); }
        FordPair*   first(void) { return (_fa); }
        FordPair*   second(void) { return (_fb); }
        bool        is_simple(void) { return _is_simple; }
    private:
        bool        _is_simple;
        Type         _value;
        FordPair*    _fa;
        FordPair*    _fb;
        size_t      _depth;
        bool _destroy;

};

template<typename Type, template < typename, typename = std::allocator<Type> > class ContainerType>
class FordContainer
{
    public:
        FordContainer() {}
        FordContainer(ContainerType<Type>& container)
            : _container(container) {}
        ~FordContainer() {}
        typedef typename ContainerType<Type>::iterator iterator;
        typename ContainerType<Type>::iterator begin() { return (_container.begin()); }
        typename ContainerType<Type>::iterator end() { return (_container.end()); }
        typename ContainerType<Type>::iterator  at(size_t i)
        {
            typename ContainerType<Type>::iterator output = begin();
            std::advance(output, i);
            return (output);
        }

        size_t  size() { return (_container.size()); }
        Type&   operator [] (size_t i) { return (*at(i)); }
        void    operator = (FordContainer<Type, ContainerType> clone) { _container = clone._container; }
        void    push_back(const Type value) { _container.push_back(value); }
        void    insert(FordContainer<Type, ContainerType>& arr)
        {
            typename ContainerType<Type>::iterator it;
            bool    is_inserted;

            for (size_t i = 0; i < arr.size(); i++)
            {
                is_inserted = false;
                for (size_t j = _container.size(); j > 0; j--)
                {
                    it = _container.end();
                    std::advance(it, - j);
                    if ( arr[i] < *it )
                    {
                        is_inserted = true;
                        _container.insert(it, arr[i]);
                        break ;
                    }
                }
                if (is_inserted == false)
                    _container.insert(_container.end(), arr[i]);
            }
        }
        void    clear(void) { _container.clear(); }
    private:
        ContainerType<Type> _container;
};


template < template < typename, typename > class ContainerType >
FordContainer<FordPair<int>*, ContainerType> fold(FordContainer<FordPair<int>, ContainerType>& pair)
{
    FordContainer<FordPair<int>*, ContainerType> reste;
    FordContainer<FordPair<int>, ContainerType>  tmp;
    FordPair<int>*   ptr;
    size_t  size = pair.size();

    while (size > 1)
    {
        tmp.clear();
        ptr = NULL;
        if (size % 2 == 1)
        {
            ptr = new FordPair<int>(pair[size - 1]);
            size -= 1;
        }
        reste.push_back(ptr);
        for (size_t i = 0; i < size; i += 2)
            tmp.push_back(FordPair<int>(pair[i], pair[i + 1]));
        pair.clear();
        pair = tmp;
        size = pair.size();
    }
    return (reste);
}

template<
    typename Type,
    template < typename, typename = std::allocator<Type> > class ContainerType
>
void fordJohnsonSort(ContainerType<Type>& arr, bool should_print)
{
    FordContainer<Type, ContainerType> ford_arr(arr);
    FordContainer<FordPair<int>, ContainerType>  pair;
    
    for (size_t i = 0; i < ford_arr.size(); i++)
        pair.push_back(FordPair<int>(ford_arr[i]));

    FordContainer<FordPair<int>*, ContainerType> reste = fold(pair);
    size_t depth = reste.size();

    FordContainer<FordPair<int>, ContainerType>  bigger;
    FordContainer<FordPair<int>, ContainerType>  smaller;
    while (depth != 0)
    {
        for (size_t i = 0; i < pair.size(); i++)
        {
            if (pair[i].is_simple() == false)
            {
                bigger.push_back(*pair[i].first());
                smaller.push_back(*pair[i].second());
            }
        }
        pair.clear();
        FordPair<int>*   reste_ptr = reste[depth - 1];
        if (reste_ptr != NULL)
        {
            smaller.push_back(*reste_ptr);
            delete reste_ptr;
        }
        bigger.insert(smaller);
        pair = bigger;
        bigger.clear();
        smaller.clear();
        depth -= 1;
    }

    if (!should_print)
        return;
    std::cout << "After : ";
    typename FordContainer<FordPair<int>, ContainerType>::iterator it;
    for (it = pair.begin(); it != pair.end(); ++it) {
       std::cout << (*it).toString() << " ";
    }
    std::cout << '\b' << std::endl;
}

#endif /* ******************************************************** PMERGEME_H */
