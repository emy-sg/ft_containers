#include "map.hpp"
#include <map>

class obj {
    public:
        int i;
        obj()  { std::cout << "Obj constructor\n";}
};

int main()
{
    emy::map<int, int> n;
    std::map<int, obj> one;
    //one[1];
    //std::cout << one[1].i;
    
    return 0;
}