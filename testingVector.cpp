#include <vector>
#include <iostream>


// NB: This code will not compile.


int main (void) {

  std::vector<int> a(1,1);

  // std::cout << a[0] << std::endl;

  int b[] = {1,2,3,4,5,6,7};

  // std::cout << sizeof(b) << std::endl;

  // std::cout << sizeof(b)/sizeof(int) << std::endl;

  std::vector<int> c(b, b + (int)sizeof(b)/(int)sizeof(int));

  std::cout << c[0] << std::endl;


  std::vector<int> d(1,1000);
  c.push(0);

  for (std::vector<int> it = c.begin(); it != c.end(); ++it) {
    std::cout << std::endl;; << *it;
  }


  return 0;
}
