#include <iostream>

template < typename T>
class emy {
    private:
        int i;

    public:
        emy() { std::cout << "Emy default constructor\n"; }

};

int main() {
    emy<int> me;
}
