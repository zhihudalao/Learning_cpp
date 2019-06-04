/*
template<class ForwardIterator1, class ForwardIterator2>
  ForwardIterator2 swap_ranges (ForwardIterator1 first1, ForwardIterator1 last1,
                                ForwardIterator2 first2)
{
  while (first1!=last1) {
    swap (*first1, *first2);
    ++first1; ++first2;
  }
  return first2;
}

Exchanges the values of each of the elements in the range [first1,last1) with those of their respective elements in the range beginning at first2.

The function calls swap (unqualified) to exchange the elements.
*/

// swap_ranges example
#include <iostream>     // std::cout
#include <algorithm>    // std::swap_ranges
#include <vector>       // std::vector

int main () {
  std::vector<int> foo (5,10);        // foo: 10 10 10 10 10
  std::vector<int> bar (5,33);        // bar: 33 33 33 33 33

  std::swap_ranges(foo.begin()+1, foo.end()-1, bar.begin());

  // print out results of swap:
  std::cout << "foo contains:";
  for (std::vector<int>::iterator it=foo.begin(); it!=foo.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';

  std::cout << "bar contains:";
  for (std::vector<int>::iterator it=bar.begin(); it!=bar.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';

  return 0;
}