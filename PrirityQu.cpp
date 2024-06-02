#include<iostream>
using namespace std;
#define size 10
template <class T >
class PriorityQu {
	int _pr = 0;
	int _top;
	int _size;
	T _arr[size];
	int _priority[size];
public:
	PriorityQu()
	{
		_top = -1;
		_size = 0;
	}
	void AddElement(int pr, T element) {
		if (isFull()) {
			cout << "Que is full!!";
			return;
		}
		_arr[_size] = element;
		_priority[_size] = pr;
		_size++;
		_top++;

	}
	void DeleteElement(T element) {
		if (isEmpty()) {
			cout << "Que is Empty!!";
		}
		T last_element = _arr[size - 1];
		swap(element, last_element);
		_top--;
	}
	bool isEmpty() {
		if (_top == -1) {
			return true;
		}
		else return  false;
	}
	bool isFull() {
		if (_top == size - 1) {
			return true;
		}
		else return false;
	}
	T peek() {
		int max_index = 0;
		int max_priority = _priority[0]; 
		for (int i = 1; i < _size; i++) {
			if (_priority[i] > max_priority) {
				max_priority = _priority[i];
				max_index = i;
			}
		}
		return _arr[max_index];
	}
};
void main() {
	PriorityQu<char> ques;
	ques.AddElement(1, 'a');
	ques.AddElement(2, 'b');
	ques.AddElement(4, 'c');
	ques.AddElement(6, 'd');
	ques.AddElement(9, 'y');
	ques.AddElement(0, 'x');


	cout<<ques.peek();
}