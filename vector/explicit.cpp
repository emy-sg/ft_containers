// https://www.geeksforgeeks.org/use-of-explicit-keyword-in-cpp/#:~:text=Explicit%20Keyword%20in%20C%2B%2B%20is%20used%20to%20mark%20constructors,can%20be%20used%20in%20typecasting.


/*
	Explicit keyword in c++

*/

#include <iostream>

// Case without explicit

/*class Complex {
	private:
		double real;
		double imag;
	public:
		Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}
		bool operator == (Complex rhs)
		{
			return (real == rhs.real && imag == rhs.imag);
		}
};

int main() {
	Complex cmp1(3.0, 0.0);

	if (cmp1 == 3.0)
		std::cout << "Same";
	else
		std::cout << "Not Same";
	return (0);
} */

//		----------------------------------------

class Complex {
	private:
		double real;
		double imag;

	public:
		explicit Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}
		bool operator==(Complex rhs)
		{
			return (real == rhs.real && imag == rhs.imag);
		}
};

int main() {
	Complex com1(3.0, 0.0);

	if (com1 == 3.0)
		std::cout << "Same";
	else
		std::cout << "Not Same";
	return 0;
}

