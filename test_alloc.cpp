#include <memory>
#include <iostream>

// https://en.cppreference.com/w/cpp/memory/allocator

int main()
{
	// For int:
	std::allocator<int> alloc; // default allocator for ints

	int *p = alloc.allocate(1); // space for one int
	*p = 10;
	std::cout << "int p = " << *p << "\n";
	alloc.deallocate(p, 1);	// and it is gone

	// For string:
	std::allocator<std::string> alloc;
	
	typedef traits_t = std::allocator_traits<de


}
