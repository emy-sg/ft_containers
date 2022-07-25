#include <memory>
#include <iostream>

// https://en.cppreference.com/w/cpp/memory/allocator

int main()
{
	// For int:
	/*std::allocator<int> alloc; // default allocator for ints

	int *p = alloc.allocate(1); // space for one int
	*p = 10;
	std::cout << "int p = " << *p << "\n";
	alloc.deallocate(p, 1);	// and it is gone
	*/

	// For string:
	std::allocator<std::string> alloc;
	// matching traits
	using traits_t = std::allocator_traits<decltype(alloc)>;

	traits_t::rebind_alloc<std::string> alloc_ = alloc;

	std::string* p = traits_t::allocate(alloc, 2);

	traits_t::construct(alloc, p, "foo");
	traits_t::construct(alloc, p + 1, "bar");

	std::cout << p[0] << ' ' << p[1] << "\n";

	traits_t::destroy(alloc, p+1);
	traits_t::destroy(alloc, p);
	traits_t::deallocate(alloc, p, 2);

}
