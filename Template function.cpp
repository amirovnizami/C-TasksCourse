#include<iostream>
using namespace std;

class Student {
public:
	string _name;
	string _surname;
	float _avg;
	Student()
	{

	}
	Student(string name, string surname, float avg)
	{
		_name = name;
		_surname = surname;
		_avg = avg;
	}

	bool operator==(const Student& other) const {
		return (_name == other._name && _surname == other._surname && _avg == other._avg);
	}

	bool operator!=(const Student& other) const {
		return (_name == other._name && _surname == other._surname && _avg == other._avg);
	}

	friend ostream& operator<<(ostream& output, const Student& s);
};

ostream& operator<<(ostream& output, const Student& s)
{
	output << "\nName: " << s._name << endl
		<< "Surname: " << s._surname << endl
		<< "Age: " << s._avg << endl;


	return output;
}

template <typename Type>

class List {
public:
	Type* _arr;
	size_t _size;

	List()
	{
		_arr = nullptr;
		_size = 0;
	}
	List(size_t size)
	{
		_size = size;
		_arr = new int[size] {};
	}

	void print() {
		cout << "[";
		for (size_t i = 0; i < _size; i++)
		{
			cout << _arr[i] << (i == _size - 1 ? "" : ",");
		}
		cout << "]";
	}
	void append(Type element) {

		Type* newArr = new Type[_size + 1];
		for (size_t i = 0; i < _size; i++)
		{
			newArr[i] = _arr[i];
		}
		newArr[_size] = element;
		_size++;
		delete[] _arr;
		_arr = newArr;
		newArr = nullptr;
		delete[] newArr;

	}
	void remove(Type element) {
		Type* newArr = new Type[_size];
		size_t newSize = 0; 

		for (size_t i = 0; i < _size; i++) {
			if (_arr[i] == element) { 
				continue;
			}
			else newArr[newSize++] = _arr[i];
		}

		delete[] _arr;
		_arr = newArr; 
		_size = newSize; 
	}

	void pop() {
		Type* newArr = new Type[_size]; 
		size_t newSize = 0; 

		for (size_t i = 0; i < _size-1; i++) {
			newArr[newSize++] = _arr[i];
		}

		delete[] _arr;
		_arr = newArr;
		_size = newSize;
	};
	void pop(int index) {
		Type* newArr = new Type[_size]; 
		size_t newSize = 0; 

		for (size_t i = 0; i < _size; i++) {
			if (i == index) { 
				continue;
			}
			else newArr[newSize++] = _arr[i];
		}

		delete[] _arr;
		_arr = newArr;
		_size = newSize;
	
	}

};

void main() {


	Student s1("Nazim", "Nazimli", 5.4);
	Student s2("Razim", "Razimli", 1.4);
	Student s3("Kazim", "Kazimli", 6.4);
	Student s4("Tazim", "Tazimli", 9.4);


	List<Student> students;

	students.append(s1);
	students.append(s2);
	students.append(s3);
	students.append(s4);

	students.pop(2);

	students.print();






}