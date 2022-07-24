#include <iostream>
#include <vector>
#include <memory>

/* Vector:
 
   * Vectors are sequence containers representing arrays that can change in size.
   		==> use of std::allocator::allocate() to allocate for vector
			https://cplusplus.com/reference/memory/allocator/allocate/
   * 
*/

template < typename T, typename Alloc = std::allocator<T> >
class vector {
	public:
		vector(int i) {
			typedef Alloc::<T> 
		}
		vector(const vector& inst) {
			*this = inst;
		}
		~vector() {}
		vector& operator=(const vector& inst) {
			this = allocator(inst.size());
			int i;
			for (i = 0; i < inst.size(); i++)
			{
				this[i] = inst[i];
			}
		}


};

int main() {

	return 0;
}

