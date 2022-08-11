#include "map.hpp"
#include <map>

/*int main () {
  emy::pair <std::string,double> product1;                     // default constructor
  emy::pair <std::string,double> product2 ("tomatoes",2.30);   // value init
  emy::pair <std::string,double> product3 (product2);          // copy constructor

  product1 = emy::make_pair(std::string("lightbulbs"),0.99);   // using make_pair (move)

  product2.first = "shoes";                  // the type of first is string
  product2.second = 39.90;                   // the type of second is double

  std::cout << "The price of " << product1.first << " is $" << product1.second << '\n';
  std::cout << "The price of " << product2.first << " is $" << product2.second << '\n';
  std::cout << "The price of " << product3.first << " is $" << product3.second << '\n';
  return 0;
}*/

// ==> Test std::pair

/*int main () {
  std::pair <int,int> foo;
  std::pair <int,int> bar;

  foo = std::make_pair (10,20);
  bar = std::make_pair (10.5,'A'); // ok: implicit conversion from pair<double,char>

  std::cout << "foo: " << foo.first << ", " << foo.second << '\n';
  std::cout << "bar: " << bar.first << ", " << bar.second << '\n';

  return 0;
}*/

//  ==> Test constructor map

int main ()
{
  std::map<char, int> first;

  first['a'] = 10;
  first['b'] = 30;
  first['c'] = 50;
  first['d'] = 70;

  //emy::map<char, int> second(first);

  return 0;
}

