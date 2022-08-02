#include <iostream>
#include <vector>

int main() {

	double m = 5.555;
	std::vector<double> n(5, m);

	std::vector<double>::iterator iter;
	/*for (iter = n.begin(); iter < n.end(); ++iter)
		std::cout << *iter << " ";
	std::cout << "\n";
	*/
	
	std::cout << iter << std::endl;
	return (0);
}
