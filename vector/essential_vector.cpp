#include <iostream>

/* Vectors are just like arrays, 
 * 	cuz vectors use contiguous storage locations for their elements
 * 	but unlike arrays, their size can change dynamically, their storage being handled automatically by the container.
*
*  This array may need to be reallocated in order to grow in size when new elements are inserted, which implies allocating a new array and moving all elements to it.
*/

// Documentation:
// - https://m.cplusplus.com/reference/vector/vector/ -

template < typename T, typename Alloc = std::allocator<T>  >
class vector {
	typedef T value_type;
	typedef Alloc allocator_type;
	typedef allocator_type::reference reference; // typename for ::
	typedef allocator_type::const_reference const_reference; //
	typedef allocator_type::pointer pointer; //
	typedef allocator_type::const_pointer const_pointer; //


	// typedef typename std::iterator<> iterator;
	// typedef typename std::iterator<> const_iterator;
	// typedef typename std::iterator<> reverse_iterator;
	// typedef typename std::iterator<> const_reverse_iterator;
	
	typedef std::iterator_traits<iterator>::difference_type difference_type;
	typedef difference_type size_type;

 public:
	// Constructor
	// destructor
	// operator=
	
	//begin
	//end
	//rbegin
	//rend
	
	//size
	//max_size
	//resize
	//capacity
	//empty
	//reserve
	
	//operator[]
	//at
	//front
	//back
	
	//assign
	//push_back
	//pop_back
	//insert
	//erase
	//swap
	//clear
	
	//get_allocator
	allocator_type get_allocator() const {
		// #include <memory> header
		// Returns a copy of the allocator object associated with the vector
		return std::allocator<value_type>;
	}
	
	//relational_operators
	//swap
	
	//vector<bool>
};

int main() {
	vector<int, std::allocator<int> > i;
}
