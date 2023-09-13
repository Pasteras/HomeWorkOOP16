#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        left = nullptr;
        right = nullptr;
        data = value;
    }
};

#define Count 10

void display2D(Node* root, int space) {
    if (root == nullptr) {
        return;
    }

    space += Count; // 10

    display2D(root->right, space);
    cout << endl;
    for (int i = Count; i < space; i++) {
        cout << " ";
    }
    cout << root->data;

    display2D(root->left, space);
}

int main()
{
    Node* root = new Node(2);
    root->left = new Node(7);
    root->right = new Node(5);
    root->left->left = new Node(2);
    root->left->right = new Node(6);
    root->right->right = new Node(9);
    root->left->right->left = new Node(5);
    root->left->right->right = new Node(11);
    root->right->right->left = new Node(4);
    display2D(root, 10);

}