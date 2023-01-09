// Binary_Search_Tree.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "BST.h"


int main()
{
    int option, val = 0;
    BST obj;
    int balancedFactor;
    int height;
    do {
        Node* newnode = new Node();
        cout << "Choose an operation "
            << "Select Option number. Enter 0 to exit" << endl;
        cout << "1. Insert Node" << endl;
        cout << "2.Search Node" << endl;
        cout << "3.Print BST values" << endl;
        cout << "4. clear screen" << endl;
      
        cout << "0. Exit" << endl;
        cin >> option;
        switch (option) {
        case 0: break;
        case 1: cout << "insert, Enter -1 to finish " << endl;
            while (val!= -1) {
                Node* node = new Node();
                cout << "Enter value " << endl;
                cin >> val;
                if (val != -1) {
                    node->data = val;
                    obj.insertNode(node);
                }
                else {
                    break;
                }
            }
            break;
        case 2: cout << "search: " << endl;
            cout << "Enter value to search " << endl;
            cin >> val;
            newnode=obj.search(val);
            if (newnode != NULL)
                cout << "Value Found" << endl;
            else
                cout << "Value Not Found" << endl;
            break;
        case 3: cout << "Display Tree" << endl;
            obj.print2D(obj.root, 5);
            break;
        case 4: system("cls");
            break;
        
        default: cout << "enter option valid" << endl;
          
        }
    } while (option != 0);
    
}

