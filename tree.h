#include <iostream>
#include <vector>

class Node {

public:
  int value;
  Node *left;
  Node *right;
  Node(int val, Node *l, Node *r) : value(val), left(l), right(r) {}
};

class Tree {
public:
  Tree();
  ~Tree();
  void insert(int value);
  std::vector<int> traverse();

private:
  std::vector<Node *> nodes;
  Node *root;
  void traverse(Node *current, std::vector<int> &result);
  void insert(int value, Node *current);
};
