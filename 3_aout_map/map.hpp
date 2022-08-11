# ifndef MAP_HPP
#define MAP_HPP

#include <iostream>
#include <memory.h>
#include "pair.hpp"
#include "Tree.hpp"

namespace emy {

template < class Key, class T, class Compare = std::less<Key>, class Alloc = std::allocator< std::pair<const Key, T> > >
class map {

    public:

        typedef Key key_type;
        typedef T mapped_type;
        typedef emy::pair<const key_type, mapped_type> value_type; // emy::pair
        typedef Compare key_compare;
        // value_compare
        typedef Alloc allocator_type;
        typedef typename allocator_type::reference reference;
        typedef typename allocator_type::const_reference const_reference;
        typedef typename allocator_type::pointer pointer;
        typedef typename allocator_type::const_pointer const_pointer;

        // Constructor
        explicit map() { std::cout << "Map empty constructor\n"; }

        /*template < class InputIterator >
        map (InputIterator first, InputIterator last) { }*/
        

    private:
        Tree<key_type, mapped_type, key_compare, allocator_type>* rbt;
};
}
#endif

/*
    Map:
        (constructor)
        (destructor)
        (operator=)
        get_allocator : darouri

    Element access
        at : darouri
        [] : darouri

    Iterators
        begin
        end
        rbegin
        rend

    Capacity
        empty
        size
        max_size

    Modifiers
        clear
        insert
        erase
        swap

    Lookup
        count
        find
        equal_range
        lower_range
        upper_range

    Observers
        key_comp
        value_comp
*/
