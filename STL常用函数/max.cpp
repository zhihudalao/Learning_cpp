/*
default (1)	
template <class T> const T& max (const T& a, const T& b);
custom (2)	
template <class T, class Compare>
  const T& max (const T& a, const T& b, Compare comp);



template <class T> const T& max (const T& a, const T& b) {
  return (a<b)?b:a;     // or: return comp(a,b)?b:a; for version (2)
}
*/


// max example
#include <iostream>     // std::cout
#include <algorithm>    // std::max

int main () {
  std::cout << "max(1,2)==" << std::max(1,2) << '\n';
  std::cout << "max(2,1)==" << std::max(2,1) << '\n';
  std::cout << "max('a','z')==" << std::max('a','z') << '\n';
  std::cout << "max(3.14,2.73)==" << std::max(3.14,2.73) << '\n';
  return 0;
}