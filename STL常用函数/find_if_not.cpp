/*
template<class InputIterator, class UnaryPredicate>
  InputIterator find_if_not (InputIterator first, InputIterator last, UnaryPredicate pred)
{
  while (first!=last) {
    if (!pred(*first)) return first;
    ++first;
  }
  return last;
}
*/

// find_if_not example
#include <iostream>     // std::cout
#include <algorithm>    // std::find_if_not
#include <array>        // std::array

int main () {
  std::array<int,5> foo = {1,2,3,4,5};

  std::array<int,5>::iterator it =
    std::find_if_not (foo.begin(), foo.end(), [](int i){return i%2;} );
  std::cout << "The first even value is " << *it << '\n';

  return 0;
}