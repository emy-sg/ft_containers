/*
 	The given task is to implement a class in C++
     which behaves just like the "Vector class".

	https://www.geeksforgeeks.org/how-to-implement-our-own-vector-class-in-c/
*/

/*
	Vectors are the same as dynamic arrays with the ability to resize themselves automatically when an element is inserted or deleted, with their storage being handled automatically by the container.
==> Vector elements are placed in contiguous storage so that they can be accessed and traversed using iterators.
==> In vector, data is inserted at the end.
	But inserting and erasing at the beginning or in the middle is linear in time.

*/

// self implementation of the vector Class in c++

#include <iostream>

template <typename T>
class myvector {
	T* arr; // is a pointer which stores the address of our vector
	int capacity; // is the total storage
	int current; //  is the number of elements present in the vector

	public:
		myvector() {
			arr = new T[1];
			capacity = 1;
			current = 0;
		}
		~myvector() {
			delete [] arr;
		}

		void push (T data)
		{
			if (current == capacity) {
				T* tmp = new T[2 * capacity];
				for (int i = 0; i < capacity; i++)
					tmp[i] = arr[i];
				delete[] arr;
				capacity *= 2;
				arr = tmp;
			}

			// Inserting the new data
			arr[current] = data;
			current++;
		}

		void push (T data, int index)
		{
			if (index == capacity)
				push(data);
			else
				arr[index] = data;
		}

		T get(int index)
		{
			if (index < current)
				return arr[index];
			return 0;
		}

		void pop() {
			current--;
		}

		int size() {
			return current;
		}

		int getcapacity() {
			return capacity;
		}

		void print() {
			for (int i = 0; i < current; i++)
				std::cout << arr[i] << " ";
			std::cout << "\n";
		}
};

int main() {
	myvector<int> v;
	myvector<char> v1;

	v.push(10);
	v.push(20);
	v.push(30);
	v.push(40);
	v.push(50);

	v1.push(71);
	v1.push(72);
	v1.push(73);
	v1.push(74);

	std::cout << "Vector size: " << v.size() << std::endl;
	std::cout << "Vector capacity: " << v.getcapacity() << std::endl;

	std::cout << "Vector elements : ";
	v.print();

	v.push(100, 1);

	std::cout << "\nAfterupdating 1st index" << std::endl;
	
	std::cout << "Vector elements of type int : " << std::endl;
	v.print();

	std::cout << "Vector elements of type char : " << std::endl;
	v1.print();

	std::cout << "Element at 1st index of type int: " << v.get(1) << std::endl;
	std::cout << "Element at 1st index of type char: " << v1.get(1) << std::endl;

	v.pop();
	v1.pop();

	std::cout << "\nAfter deleting last element" << std::endl;
	std::cout << "Vector size of type int: " << v.size() << std::endl;
	std::cout << "Vector size of type char: " << v1.size() << std::endl;

	std::cout << "Vector capacity of type int : " << v.getcapacity() << std::endl;
	std::cout << "Vector capacity of type char : " << v1.getcapacity() << std::endl;
 
    	std::cout << "Vector elements of type int: ";
    	v.print();
    	std::cout << "Vector elements of type char: ";
    	v1.print();

	return (0);
}

