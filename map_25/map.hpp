# ifndef MAP_HPP
# define MAP_HPP

#include <iostream>
#include <memory>

/*template < class key, class T, class Compare = std::less<key>, class Alloc = std::allocator<std::pair<const key, T> > 
class map {
	typedef key key_type;
	typedef T mapped_type;
	

};

*/

template <typename T> class node {
	public:
		T	value;	// 
		char color; // R for red && B for Black
		char dir;	// L for left && R for right

		node<T> *parent;
		node<T> *l_child; // left_child
		node<T> *r_child; // right_child
};

/*
	Maps are "associative" containers that store elements formed by a combination
	 of a key value and a mapped value, following a specific order.

	In a "map", the key "values" are generally used to sort and uniquely identify the elements,
	 while the mapped values store the content associated to this key.
	The types of key and mapped value may differ, and are grouped together in member type 
	 "value_type", which is a "pair" type combining both:
	 	"typedef pair <const Key, T> value_type"
*/



#endif