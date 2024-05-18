#include "Header.h"


void dequeue(Node*& front, Node*& rear, int n) {
	while (front && n > 0) {
		Node* temp = front;
		cout << front->data << " "; // выводим значение извлеченного элемента
		front = front->next; // сдвигаем указатель на начало на следующий элемент
		delete temp; // освобождаем память извлеченного элемента
		n--;
	}

	if (front == nullptr) {
		rear = nullptr; // если очередь пустая, обнуляем указатель на конец
	}

	cout << endl;
	cout << "Новый адрес начала: " << front << endl; // выводим адрес начала очереди
	cout << "Новый адрес конца: " << rear << endl; // выводим адрес конца очереди
}


