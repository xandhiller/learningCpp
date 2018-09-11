#include <iostream>
#include <vector>

int main (void) {

  std::vector<int> a(1,100);
//  int myInts[] = {1,2,3,4,5,6,7,8,9};

  std::vector<int> b(2,200);

  // Insert b into a
  a.insert(a.begin(), b.begin(), b.end());

  
  std::cout << a.front() << std::endl;


  return 0;
}
