#include <iostream>

/*int main() {
	typedef int i; // alias i to int

	i var;
	var = 5;
	std::cout << var << "\n";
	return 0;
}*/

//	---------------------------

/*class T {
	//typedef int i; // Error compilation: 'i' is a private member of 'T'
	public:
		typedef int i;
};

int main() {
	T::i var;

	var = 5;
	std::cout << var << "\n";
	return 0;
}*/

//	-----------------------------

// ==> Allocator: https://en.cppreference.com/w/cpp/memory/allocator

/*template <class T>
class MyClass {
	public:
		int *i;
		MyClass() {
			std::allocator<int> alloc;

			i = alloc.allocate(10);
		}
};

int main() {
	MyClass A;

	 
}*/

//	--------------------------------

#include <vector>

template <typename T>
class MyClass {
	std::vector<T> v;
	std::vector<T>::iterator v_itr;
};

int main() {

	MyClass<int> my;
	my.v.insert(4);
}

