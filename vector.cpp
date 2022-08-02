#include <iostream>
#include <memory>
#include "iterator.hpp"

template <class T, class A = std::allocator<T> >
class vector {
	public:
	// typedefs
	typedef T value_type;
	typedef A allocator_type;
/* typedef allocator_type::pointer pointer;
    ==> error allocator_type::pointer is a dependent name, then we need to prefix it by "typename" to tell the compiler to parse it in a certain way.
*/
	typedef typename allocator_type::pointer pointer;
        typedef typename allocator_type::reference reference;
	typedef typename allocator_type::const_pointer const_pointer;
	typedef typename allocator_type::const_reference const_reference;
	
	// Iterators
	typedef Iterator<std::random_access_iterator_tag, value_type> iterator;

	
	
};

int main()
{
	vector<int> v;
	vector<int>::iterator iter;
}
