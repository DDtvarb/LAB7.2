#include "Header.h"

int main() {
	setlocale(LC_ALL, "Ru");
	Node* front = new Node{ 1, nullptr };
	front->next = new Node{ 2, nullptr };
	front->next->next = new Node{ 3, nullptr };
	front->next->next->next = new Node{ 4, nullptr };
	front->next->next->next->next = new Node{ 5, nullptr };
	Node* rear = front->next->next; // указатель на конец


	Node* current = front;
	while (current != nullptr) {
		cout << current->data << " ";
		current = current->next;
	}
	cout << endl;

	int n;
	cout << "Введите число элементов для извлечения: ";
	cin >> n;

	dequeue(front, rear, n);

	return 0;
}