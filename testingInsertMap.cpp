#include <iostream>
#include <map>

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


int main (void) {

  std::map<int, Node> tester;

  // Iterator
  std::map<int,Node>::iterator i = tester.begin();


  std::cout << i->first << std::endl;


  tester.insert();


//  for (std::map<int,Node> iterator = tester.begin(), iterator != tester>end(); it++) {
//    cout << tester
//  }


  return 0;
}
