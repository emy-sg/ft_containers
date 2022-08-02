# ifndef ITERATOR_HPP
#define ITERATOR_HPP

#include <iostream>
#include <memory>

template < class Category, class T, class Distance = ptrdiff_t, class Pointer = T*, class Reference = T&>
class Iterator{
	// Typedefs
	typedef Category iterator_category;
	typedef T value_type;
	typedef Distance difference_type;
	typedef Pointer pointer;
	typedef Reference reference;

	private:
		T* ptr;
	
	public:
		Iterator(): ptr() {}
		~Iterator() {}
		Iterator(const Iterator& instance) {
			ptr = instance->ptr;
		}
		Iterator& operator=(const Iterator& instance) {
			ptr = instance->ptr;
			return (*this);
		}

		// operations
		bool operator==(const Iterator& rhs) const {
			return ptr==rhs.ptr;
		}
		bool operator!=(const Iterator& rhs) const {
			return ptr!=rhs.ptr;
		}

		reference operator*() {
			return *ptr;
		}
		pointer operator->() {
			return ptr;
		}
		
		void operator=(const reference t)
		{
			*ptr = t;
		}
		//	------------------------------------
		value_type	operator++() {
			value_type tmp(*this);
			ptr++;
			return tmp;
		}

		value_type	operator++(int) { // pre ++ptr
			return ptr++;
		}

		//////
		
		void operator--() {
		
		}
		
		void operator--(void) {
		
		}

		///////

};

#endif
