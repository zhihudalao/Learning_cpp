/*
template<class InputIterator, class ForwardIterator>
  InputIterator find_first_of ( InputIterator first1, InputIterator last1,
                                ForwardIterator first2, ForwardIterator last2)
{
  while (first1!=last1) {
    for (ForwardIterator it=first2; it!=last2; ++it) {
      if (*it==*first1)          // or: if (pred(*it,*first)) for version (2)
        return first1;
    }
    ++first1;
  }
  return last1;
}
*/

// find_first_of example
#include <iostream>     // std::cout
#include <algorithm>    // std::find_first_of
#include <vector>       // std::vector
#include <cctype>       // std::tolower

bool comp_case_insensitive (char c1, char c2) {
  return (std::tolower(c1)==std::tolower(c2));
}

int main () {
  int mychars[] = {'a','b','c','A','B','C'};
  std::vector<char> haystack (mychars,mychars+6);
  std::vector<char>::iterator it;

  int needle[] = {'A','B','C'};

  // using default comparison:
  it = find_first_of (haystack.begin(), haystack.end(), needle, needle+3);

  if (it!=haystack.end())
    std::cout << "The first match is: " << *it << '\n';

  // using predicate comparison:
  it = find_first_of (haystack.begin(), haystack.end(),
                      needle, needle+3, comp_case_insensitive);

  if (it!=haystack.end())
    std::cout << "The first match is: " << *it << '\n';

  return 0;
}