#include "tree.h"

Tree::Tree() : nodes(), root(nullptr) {}
Tree::~Tree() {
  for (auto i : nodes) {
    delete i;
  }
}

void Tree::insert(int value, Node *current) {

  if (value >= (current->value)) {
    if (current->right == nullptr) {
      Node *n = new Node(value, nullptr, nullptr);
      nodes.push_back(n);
      current->right = nodes.back();
    } else {
      insert(value, current->right);
    }

  } else if (value < (current->value)) {
    if (current->left == nullptr) {
      Node *n = new Node(value, nullptr, nullptr);

      nodes.push_back(n);
      current->left = nodes.back();
    } else {
      insert(value, current->left);
    }
  }
}

void Tree::insert(int value) {

  if (root == nullptr) {
    Node *n = new Node(value, nullptr, nullptr);

    nodes.push_back(n);
    root = nodes.back();
  } else
    insert(value, root);
}

void Tree::traverse(Node *current, std::vector<int> &result) {

  result.push_back(current->value);
  if (current->left != nullptr)
    traverse(current->left, result);
  if (current->right != nullptr)
    traverse(current->right, result);
}

std::vector<int> Tree::traverse() {

  std::vector<int> result;
  if (root == nullptr) {
    return {};
  } else {
    traverse(root, result);
  }

  return result;
}