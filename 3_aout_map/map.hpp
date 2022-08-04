# ifndef MAP_HPP
#define MAP_HPP

#include <iostream>
#include <memory.h>
//#include "pair.hpp"

namespace emy {

template < class T1, class T2 >
class pair {
    public:
        typedef T1 first_type;
        typedef T2 second_type;

        // Member variables
        first_type first;
        second_type second;

        // Constructor

        // Non-member function overloads aka (relational operators)
};


template < class Key, class T, class Compare = std::less<Key>, class Alloc = std::allocator< std::pair<const Key, T> > >
class map {
    private:
        map *head;
        size_t size;

    public:

        typedef Key key_type;
        typedef T mapped_type;
        typedef pair<const key_type, mapped_type> value_type;
        typedef Compare key_compare;
        // value_compare
        typedef Alloc allocator_type;
        typedef typename allocator_type::reference reference;
        typedef typename allocator_type::const_reference const_reference;
        typedef typename allocator_type::pointer pointer;
        typedef typename allocator_type::const_pointer const_pointer;

        // Constructor
        explicit map() { std::cout << "Map empty constructor\n"; }

        template < class InputIterator >
        map (InputIterator first, InputIterator last) { }
};
}
#endif
