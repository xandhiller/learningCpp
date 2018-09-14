#include <iostream>
#include <utility>

int main (void) {
  
  std::pair <char,double> p[3];
//  istd::cout << "Enter a character value> ";
//  std::cin  >> p.first;
//
//  std::cout << "Enter a double value> ";
//  std::cin  >> p.second;
//
//
//  std::cout << "Character is: " << p.first  << std::endl;
//  std::cout << "Double is: "    << p.second << std::endl;  

  p[0].first = 'a';
  p[1].first = 'b';
  p[2].first = 'c';

  p[0].second = 30.0;
  p[1].second = 31.0;
  p[2].second = 32.0;


  
  return 0;
}
