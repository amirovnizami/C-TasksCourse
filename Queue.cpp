
#include<iostream>
#include<assert.h>
using namespace std;
#define sizee 10
template <class T>

class Queque {
	int _top;
	int _size;
	T _arr[sizee];
public:
	Queque()
	{
		_top = -1;
		_size = 0;
		_arr[sizee];
	}

	void Enqueque(T element) {
		if (isFull()) {
			assert(!"Queque is full!!");
		}
		_arr[sizee - _size - 1] = element;
		_size++;
		_top++;

	}
	void Dequeque() {
		if (isEmpty()) {
			assert(!"Queque is Empty!!");
		}
		_top--;
	}
	bool isEmpty() {
		if (_top == -1) {
			return true;
		}
		else return false;
	}
	bool isFull() {
		if (_top == sizee - 1) {
			return true;
		}
		else {
			return false;
		}
	}

	T peek() {
		return _arr[_size - _top - 1];
	}

};

void main() {
	Queque<int> ques;
	ques.Enqueque(1);
	ques.Enqueque(2);
	ques.Enqueque(3);
	ques.Enqueque(4);
	ques.Enqueque(5);
	ques.Enqueque(6);
	ques.Enqueque(7);
	ques.Enqueque(8);
	ques.Enqueque(9);
	ques.Enqueque(10);
	ques.Dequeque();
	ques.Dequeque();
	ques.Dequeque();
	ques.Dequeque();
	ques.Dequeque();
	ques.Dequeque();
	ques.Dequeque();
	ques.Dequeque();
	cout << ques.peek();

}