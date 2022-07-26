#include <iostream>

/*
	Vector :
   		- member types
		- Iterators


*/

// There is no difference between class 

/* What do "member types" mean in vectors?
==> https://stackoverflow.com/questions/37714566/what-do-member-types-mean-in-vectors

- The "member types" define the types that are used by the "vector object".
Many standard containers use "member types" to describe the types used, so that the programmer does not need to figure them out manually.
This is particularly useful when working with complex templates, where types may be hard to determine.

l- There are two things you need to understand:
	1- you can make aliases for TYPES:
For example: "using blah = int"
	"using" or "typedef"  would make "blah" an alias for "int".
	In other words, you would be able to use "blah" instead of "int" in any place.
	
	2- You can put those aliasias inside of classes.
For example:
	
		struct S {
			typedef type = int;
		};
==> You would be able to use "S::type" instead of an int.
P.S: "Such aliases inside of classes are often called Member Types"

* What is member types anyway?
 	A class or struct can also define member type aliases,
		
 * How to declare member types?

*/

//		---------------------------------------------
//1- Implement Vector : https://cplusplus.com/reference/vector/vector/?kw=vector

// check "test_alloc.cpp" file for more info about "std::allocator"
template <class T, class A = std::allocator<T> > // #include memory
class vector {
	typedef T value_type ;
	typedef A allocator_type;

	
	typedef typename allocator_type::reference reference;
	typedef typename allocator_type::const_reference const_reference;

	typedef typename allocator_type::pointer pointer;
	typedef typename allocator_type::const_pointer const_pointer;

	//typedef iterator;
	typedef MyIterator<std::random_access_iterator_tag, value_type> h;
	// typedef const_iterator;
	// typedef reverse_iterator;
	// typedef const_reverse_iterator;

	// typedef difference_type = iterator_traits<iterator>::difference_type;
	// typedef size_type;
};

//		-----------------------------------------------
//2- Implementing Iterator: 
//		==>		https://cplusplus.com/reference/iterator/iterator/

template < class Category, class T, class Distance = ptrdiff_t, class Pointer = T*, class Reference = T&>
class MyIterator // inheritance machi blan cuz member_type don't get inherited
{
	// Member type
	typedef  T value_type;
	typedef difference_type Distance;
	typedef pointer Pointer;
	typedef reference Reference;
	typedef iterator_category Category;	

	// pointer
	value_type *p;

	public:
	//https://cplusplus.com/reference/iterator/RandomAccessIterator/
			MyIterator(){ // default constructor
			p = NULL;
		}
		MyIterator(value_type *x)	: p(x) { // default constructor
		}
		
		MyIterator(const MyIterator& inst) : p(inst.p) { // copy constructor
		}

		~MyIterator() { // destructor
		}

		MyIterator& operator=(const MyIterator& inst) {
			this->p = inst.p;
			return *this;
		}
		
		//	--------------------------------------

		bool operator==(const MyIterator& rinst) const {
			return p == rinst.p;
		}

		bool operator!=(const MyIterator& rinst) const {
			return p != rinst.p;
		}
};


int main()
{
	vector<int> v;
}