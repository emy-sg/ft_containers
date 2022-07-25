#include <iostream>
#include <vector>


// max_size() is the theoretical maximum number of items that could be put in your vector. 
// ==> (2^64/1024) / (size_of_datatype in bytes)

void default_constructor() {
	std::vector<int> i;

	std::cout << "size " << i.size() << std::endl;  // size = 0
	std::cout << "max_size " << i.max_size() << std::endl; // max_size = 4611686018427387903
	std::cout << "capacity " << i.capacity() << std::endl; // capacity = 0

	//std::vector<std::string> s;

}

void parameterized_constructor(int j) {
	std::vector<int> i(j);

	std::cout << "size " << i.size() << std::endl;  // size 
	std::cout << "max_size " << i.max_size() << std::endl; // max_size = 
	std::cout << "capacity " << i.capacity() << std::endl; // capacity = 
}

int main() {
	default_constructor();
	for (int i=0; i <= 100; i++)
	{
		std::cout << "i = " << i << "\n";
		parameterized_constructor(i);
		std::cout << "\n";
	}
	
}
