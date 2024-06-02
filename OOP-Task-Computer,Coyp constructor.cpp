#include<iostream>
#include <cassert>
using namespace std;

class Computer
{
private:
	static size_t _staticId;
	size_t _id;
	char* _model;
	char* _color;
	size_t _year;
	char* _CPU; // Intel Core i7-8550U
	short _RAM;
	size_t _space; // (Hard disc or SSD)
public:
	Computer() = default;
	Computer(const char* model, const char* color)
	{
		setModel(model);
		setColor(color);
	}
	//Delegation of Constructor
	Computer(const char* model, const char* color, size_t year, const char* cpu, short ram, size_t space)
		:Computer(model, color)
	{
		_id = ++_staticId;
		setYear(year);
		setCpu(cpu);
		setRam(ram);
		setSpace(space);
	}
	//Copy Constructor
	Computer(const Computer& other) {
		_id = ++_staticId;
		setModel(other._model);
		setColor(other._color);
		setYear(other._year);
		setRam(other._RAM);
		setCpu(other._CPU);
		setSpace(other._space);
	}
	//Setters
	void setModel(const char* model) {
		if (model == nullptr) {
			assert(!"Model is null!");
		}
		if (_model != nullptr) {
			delete[] _model;
		}
		size_t len = strlen(model) + 1;
		_model = new char[len];
		strcpy_s(_model, len, model);
	}
	void setColor(const char* color) {
		if (color == nullptr) {
			assert(!"Color is null!");
		}
		if (_color != nullptr) {
			delete[] _color;
		}
		size_t len = strlen(color) + 1;
		_color = new char[len];
		strcpy_s(_color, len, color);
	}
	void setYear(int year) {
		_year = year;

	}
	void setCpu(const char* cpu) {
		if (cpu == nullptr) {
			assert(!"CPU is null!");
		}
		if (_CPU != nullptr) {
			delete[] _CPU;
		}
		size_t len = strlen(cpu) + 1;
		_CPU = new char[len];
		strcpy_s(_CPU, len, cpu);
	}
	void setRam(short ram) {

		_RAM = ram;

	}
	void setSpace(size_t space) {

		_space = space;

	}
	//Getters
	size_t getId() { return _id; }
	char* getModel() { return _model; }
	char* getColor() { return _color; }
	size_t getYear() { return _year; }
	char* getCpu() { return _CPU; }
	short getRam() { return _RAM; }
	size_t getSpace() { return _space; }

	void print() {
		cout << "Id: " << _id << endl;
		cout << "Model: " << _model << endl;
		cout << "Color: " << _color << endl;
		cout << "Year: " << _year << endl;
		cout << "CPU: " << _CPU << endl;
		cout << "RAM: " << _RAM << endl;
		cout << "Space: " << _space << endl;
	};
	//Destructor
	~Computer()
	{
		delete[] _model;
		delete[] _color;
		delete[] _CPU;
	}
};
size_t Computer::_staticId = 0;
class CompStore
{
private:
	char* _name;
	Computer** _computers;
	size_t _count;
public:
	CompStore(const char* name, Computer** computers, size_t count)
	{
		setName(name);
		_computers = computers;
		_count = count;
	}
	//Copy Constructor
	CompStore(const CompStore& other)
	{
		setName(other._name);
		_computers = other._computers;
		_count = other._count;
	}

	//Setters
	void setName(const char* name) {
		if (name == nullptr) {
			assert(!"Name is null!");
		}
		if (_name != nullptr) {
			delete[] _name;
		}
		size_t len = strlen(name) + 1;
		_name = new char[len];
		strcpy_s(_name, len, name);
	}
	//Getters
	const char* getName() { return _name; }

	void print() {
		cout << "Store name : " << _name << endl;
		for (size_t i = 0; i < _count; i++)
		{
			_computers[i]->print();
		}
	};
	void printComputersRAMGreaterThan(short min) {
		for (size_t i = 0; i < _count; i++)
		{
			if (_computers[i]->getRam() > min) {
				_computers[i]->print();
			}
		}
	};
	void printComputersYearBetween(size_t minYear, size_t maxYear) {
		for (size_t i = 0; i < _count; i++)
		{
			if (_computers[i]->getYear() > minYear && _computers[i]->getYear() < maxYear) {
				_computers[i]->print();
			}
		}
	};
	Computer* getComputerById(size_t id) {
		for (size_t i = 0; i < _count; i++)
		{
			if (_computers[i]->getId() == id) {
				return _computers[i];
			}
		}
	};
	Computer** getComputersByColor(const char* color) {
		int say = 0;
		char* color2;
		for (size_t i = 0; i < _count; i++)
		{
			if (strcmp(color, _computers[i]->getColor()) == 0) {
				say++;
			}
		}
		Computer**  newComputers = new Computer * [say];
		int index = 0;
		for (size_t i = 0; i < _count; i++)
		{
			if (strcmp(color, _computers[i]->getColor()) == 0) {
				newComputers[index++] = _computers[i];
			}
		}
		return newComputers;
	};
	size_t getCount() { return _count; }
};


void main() {
	Computer* c1 = new Computer("Acer", "Grey", 2023, "Intel Core i5", 8, 512);
	Computer* c2 = new Computer("Hp", "Black", 2020, "Intel Core i7", 6, 256);
	Computer* c3 = new Computer("Dell", "Grey", 2019, "Intel Core i7", 4, 512);
	Computer* c4 = new Computer("Lenova", "White", 2018, "Intel Core i5", 16, 256);
	Computer* c5 = new Computer("Asus", "Green", 2010, "Intel Core i9", 8, 256);
	int size = 5;
	Computer** computers = new Computer * [size] {c1, c2, c3, c4, c5};

	CompStore st1("Store_1", computers, size);
	/*CompStore st2(st1);
	st1.print();
	st2.print();*/
	//st1.printComputersRAMGreaterThan(6);
	//st1.printComputersYearBetween(2018, 2022);
	//st1.getComputerById(2)->print();
	
	Computer** result;
	result = st1.getComputersByColor("Grey");
	for (size_t i = 0; i < st1.getCount(); i++)
	{
		if (result[i] != 0) {
			result[i]->print();
		}
	}
	//c1->print();
}