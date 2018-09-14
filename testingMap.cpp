#include <iostream>
#include <vector>
#include <map>

// COMPILE ARGUMENTS: g++ -std=c++11 filename.cpp

struct Node{
  // ID of the node
  int id = -1;
  // ID of the parent node
  int parent_id = -1;
  // Cost to move from the parent node to that node
  double mvt_cost = -1;
  // Cost to move from the starting node to that node
  double cost = -1;
  // Heuristic value associated to that node
  double heuristic = -1; 
};

//void printMap(map<char,int>);

int main (void) {

  std::map<char,int> tester;

  tester['a']=1;
  tester['b']=2;

  std::cout << "Value of key 'a' is: " << tester['a'] << std::endl;

  std::cout << "The size of the map is: " << tester.size() << std::endl;

  std::map<char,int>::iterator it = tester.begin();

  std::cout << "The first index key is: " << it->first << std::endl;

  it++;

  std::cout << "The second index key is: " << it->first << std::endl;

  return 0;
}

//void printMap(map<char,int>) {
//  for (map<char,int> iterator = map.begin(); iterator != map.end(); iterator++) {
//    cout << iterator << endl;
//  }
//}
