#include "tree.h"
#include <iostream>
#include <vector>

int main() {
  std::vector<int> inputs = {6, 2, 3, 1, 4, 5};
  std::vector<int> result;

  Tree my_tree;

  for (auto i : inputs) {
    my_tree.insert(i);
  }

  result = my_tree.traverse();

  std::cout<<"initial tree"<<std::endl;

  for (auto i : result) { // a vector of nodes
    std::cout << " " << i << " " << std::endl;
  }

  my_tree.insert(0);
  std::cout<<"tree after inserting 0"<<std::endl;

  result = my_tree.traverse();

  for (auto i : result) { // a vector of nodes
    std::cout << " " << i << " " << std::endl;
  }

  my_tree.invertTree();
  std::cout<<"inverted tree"<<std::endl;

  result = my_tree.traverse();

  for (auto i : result) { // a vector of nodes
    std::cout << " " << i << " " << std::endl;
  }

  return 0;
}