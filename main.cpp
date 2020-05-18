#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <iostream>
#include <queue>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int d, Node* n = NULL): data(d), next(n) {}
};


// function radixsort:
//    given pointers to the front and the back of a linked list
//    (that will be treated as a queue), orders the list in ascending
//    order using radix sort radix 10.
void radixsort(Node *front, Node *back) {
    // TO DO: IMPLEMENT
}

// function inOrder:
//   given pointer to the front of a linked list, returns
//   true if the list is in ascending order.
bool inOrder(Node *front) {
    if (front == NULL) return true;
    while (front->next != NULL) {
        if (front->data  > front->next->data)
            return false;
        front = front->next;
    }
    return true;
}




TEST_CASE( "radixsort", "[rec]" ) {
    vector<int> v{46, 11, 48, 56, 81, 21, 43, 31, 91, 26};


    Node *front, *back, *tmp;

    // Crear linked list
    front = back = new Node(v[0]);

    for (int i = 1; i < v.size(); i++) {
        back->next =  new Node(v[i]);
        back = back->next;
    }

    radixsort(front,back);

    CHECK(inOrder(front));
}
