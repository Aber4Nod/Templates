//
// Created by n.mikhnenko on 07/01/2019.
//

// define binary tree structure and traverse helpers:
struct Node {
    int value;
    Node *left;
    Node *right;
    Node(int i = 0) : value(i), left(nullptr), right(nullptr) {}
};

auto left = &Node::left;
auto right = &Node::right;

// traverse tree, using fold expression:
template<typename T, typename... TP>
Node *traverse(T np, TP... paths) {
    return (np ->* ... ->* paths);          // np ->* paths1 ->*paths2 ...
}

int main()
{
    Node *root = new Node{0};
    root->left = new Node{1};
    root->right = new Node{2};

    // traverse binary tree:
    Node *node = traverse(root, left, right);
}

