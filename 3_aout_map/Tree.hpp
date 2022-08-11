# ifndef TREE_HPP
#define TREE_HPP

#include <iostream>
#include <memory.h>
#include "pair.hpp"

namespace emy {

template <typename Key, typename T>
class Node {
	public:
        Key key;
		T	value;	// 
		char color; // R for red && B for Black
		char direction;	// L for left && R for right

		//node<T> *parent;
		//node<T> *l_child; // left_child
		//node<T> *r_child; // right_child
};

template < class Key, class T, class Compare = std::less<Key>, class Alloc = std::allocator< std::pair<const Key, T> > >
class Tree {

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
        explicit Tree() { std::cout << "Tree empty constructor\n"; }

	//private:
		Node<key_type, mapped_type> *root;
		size_t size;
};

}

#endif