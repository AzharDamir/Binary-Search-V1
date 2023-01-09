#include "BST.h"

BST::BST()
{
    root = NULL;
}

void BST::insertNode(Node* newnode)
{
    if (root == NULL) {
        root = newnode;
        cout << "value inserted as root node" << endl;
    }
    else {
        Node* tmp = root;
        while (tmp != NULL) {
            if (newnode->data == tmp->data) {
                cout << "cannot insert duplicate value" << endl;
                return;
            }
            else if ((newnode->data < tmp->data) && tmp->left == NULL) {
                tmp->left = newnode;
                cout << "insert on the left" << endl;
                break;
            }
            else if (newnode->data < tmp->data) {
                tmp = tmp->left;
            }
            else if ((newnode->data > tmp->data) && tmp->right == NULL) {
                tmp->right = newnode;
                cout << "insert on the right" << endl;
                break;
            }
            else {
                tmp = tmp->right;
            }
        }
    }
}

bool BST::isTreeEmpty()
{
    if (root == NULL)
        return true;
    return false;
}

void BST::print2D(Node* r, int space)
{
    if (r == NULL)
        return;
    space += SPACE;
    BST::print2D(r->right, space);
    cout << endl;
    for (int i = SPACE; i < space; i++) {
        cout << " ";
    }
    cout << r->data << "\n";
    BST::print2D(r->left, space);
    cout << endl;
}

Node* BST::search(int val)
{
    if (root == NULL)
        return root;
    Node* temp = root;
    while (temp != NULL) {
        if (val == temp->data)
            return temp;
        if (val < temp->data) {
            temp = temp->left;
        }
        else if (val > temp->data) {
            temp = temp->right;
        }
    }
    return NULL;
}
