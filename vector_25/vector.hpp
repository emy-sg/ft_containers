// https://m.cplusplus.com/reference/vector/vector/

#include <iostream>
#include <memory>

namespace ft
{
	
template < class T, class A = std::allocator<T> >
class vector {
	//1- Define the "Member Types": typedef old_name(definition) new_name(member_type)
	typedef T value_type;
	typedef A allocator_type;
	typedef typename A::size_type size_type;
	typedef typename A::difference_type difference_type;

	typedef typename A::pointer pointer;
	typedef typename A::const_pointer const_pointer;
	typedef typename A::reference reference;
	typedef typename A::const_reference const_reference;
	
	private:
		allocator_type alloc; //Create a variable alloc type of allocator_type
		size_t capacity; 
		size_t begin;
		size_t size;

	//2- "Member functions"
	public:
		// 2.0- default Constructor()
		explicit vector (const allocator_type& alloc = allocator_type()) {
			capacity = 0;
			size = 0;
			begin = 0;
			std::cout <<"Default constructor\n";	
		}
		
		// 2.1- size()/max_size()/resize()/capacity()/empty()/reserve()
		// void reserve(size_type n) // Request a change in capacity
		// {
		// 	if (n > capacity)
		// 	{
		// 		//
		// 	}
		// }
		
		// 2.2- Constructor/Destructor/Operator=

		// 2.3- Allocator (get_allocator)
		allocator_type get_allocator() // Returns a copy of the allocator object associated with the vector.
		{
			return alloc;
		}


};

// template<class T>
// typename ft::vector<T>::allocator_type  ft::vector<T>::get_allocator() {
// 	return (std::alloc)
// }


} // ft
