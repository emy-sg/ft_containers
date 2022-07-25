#include <iostream>
#include <vector>

int main() {

	std::vector<int>::size_type sz;

	/*std::vector<int> foo;

	sz = foo.capacity();
	std::cout << "capacity before any changes: " << sz << "\n";

	std::cout << "making foo grow:\n";
	for ( int i=0; i<100; ++i)
	{
		foo.push_back(i);
		if (sz != foo.capacity())
		{
			sz = foo.capacity();
			std::cout << "capacity changed : " << sz << "\n";
		}
	}*/


	std::vector<int> bar(100);
	std::cout << "capacity && size before any changes: " << bar.size() <<  " " <<  bar.capacity() << "\n";

	bar.reserve(10);//
	sz = bar.capacity();

	std::cout << "capacity && size before any changes: " << bar.size() <<  " " <<  sz << "\n";

	// std::cout << "making bar grow:\n";
	// for (int i=0; i<100; ++i) {
	// 	bar.push_back(i);
	// 	if (sz != bar.capacity()) 
	// 	{
	// 		sz = bar.capacity();
	// 		std::cout << "capacity changed: " << sz << "\n";
	// 	}
	// }

	return (0);
}
