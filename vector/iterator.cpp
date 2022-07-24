//https://cplusplus.com/reference/iterator/iterator/

/*
		"I can create my class iterator that inherite from a base class iterator"
	
	- The "std::iterator" is a base class template that can be used to derive iterator class from it.
PS: "It is not an iterotor class and does not provide any of the functionality an iterator is expected to have".

	- This "base class" only provides some "member types", which in fact are not required to be present in any "iterator type" cuz (iterator types have no specific member requirements).
	- But they might be useful, since they define the members needed for the default "iterator_traits" class template, to generate the appropriate instantiation automatically (and such instantiation is required to be valid for all iterator types).

	template < class Category, class T, class Distance = ptrdiff_t, class Pointer = T*, class Reference = T&>

with: 
	- Category: category to which the iterator belongs to.
(input_iterator_tag, output_iterator_tag, forward_iterator_tag, bidirectional_iterator_tag, random_access_iterator_tag)
	- T: Type of elements pointed by the iterator.

	struct iterator {
		typedef T value_type;
		typedef Distance difference_type;
		typedef Pointer pointer;
		typedef Reference reference;
	};
*/



#include <iostream>
#include <vector>
#include <cstddef> // std::ptrdiff_t

template < typename Category , typename T, class Distance = std::ptrdiff_t, class Pointer = T*, class Reference = T&>
class Iterator {
	typedef Category iterator_category;
	typedef T value_type;
	typedef Distance difference_type;
	typedef Pointer pointer;
	typedef Reference reference;
	
	int *p;

	public:
		Iterator() { p = NULL; } // default constructor
		explicit Iterator(T* x) : p(x) {}; // parameterized constructor
		Iterator(const Iterator& inst) : p(inst.p) {}
		Iterator& operator=(const Iterator& inst { this->p = inst.p; }
		~Iterator() {}

		// Overloading C++ Relational Operators for a class
		bool operator==(const Iterator& rhs) const { return p==rhs.p; }
		bool operator!=(const Iterator& rhs) const { return p!=rhs.p; }

		//operator*() 
		//operator->()

		Iterator& operator++(const Iterator& rhs)
		{

		}
		Iterator& operator--(const Iterator& rhs)
		{

		}

		operator+
		operator-

		operator<(const Iterator& rhs)
		operator>
		operator<=
		operator>=




};

int main() {
	std::vector<int> v;
	
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);

	std::vector<int>::iterator iter;
	for(iter = v.begin(); iter < v.end(); iter++)
		std::cout << *iter << " ";
	std::cout << "\n";
	return (0);
}
