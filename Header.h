
#include <iostream>



using namespace std;
struct Node {
	int data;
	Node* next;
};

void dequeue(Node*& front, Node*& rear, int n);
