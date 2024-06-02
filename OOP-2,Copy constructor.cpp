#include<iostream>
#include <cassert>
#include <cstring>
using namespace std;


class Debtor { // (debtor-borclu)
private:
	size_t _id;
	char* _name ;
	char* _surname;
	char* _workAddress;
	char* _liveAddress;
	char* _phoneNumber;
	double _salary;
	bool _hasLatePayment;
	double _debt;
	static size_t _staticId;
public:
	Debtor() = default;
	//Delegation of Constructor
	Debtor(const char*name,const char*surname)
	{
		setName(name);
		setSurname(surname);
	}
	Debtor(const char* name, const char* surname, const char* workArddess, const char* liveAdress, const char* phoneNumber, double salary, bool hasLatePayment, double debt)
		:Debtor(name,surname)
	{
		_id = ++_staticId;
		setworkAddress(workArddess);
		setLiveAddress(liveAdress);
		setPhoneNumber(phoneNumber);
		setSalary(salary);
		sethasLatePayment(hasLatePayment);
		setDebt(debt);
	}

	//Constructor Overloading

	Debtor(const char* name, const char* surname, const char* liveAddres)
	{
		setName(_name);
		setSurname(_surname);
		setLiveAddress(_liveAddress);
	}
	//Copy Constructor
	Debtor(const Debtor& other)
	{
		_id = ++_staticId;
		setName(other._name);
		setSurname(other._surname);
		setworkAddress(other._workAddress);
		setLiveAddress(other._liveAddress);
		setPhoneNumber(other._phoneNumber);
		setSalary(other._salary);
		sethasLatePayment(other._hasLatePayment);
		setDebt(other._salary);
	}
	//Copy assaigment operator
	Debtor& operator=(const Debtor& other) {
		setName(other._name);
		setSurname(other._surname);
		setworkAddress(other._workAddress);
		setLiveAddress(other._liveAddress);
		setPhoneNumber(other._phoneNumber);
		setSalary(other._salary);
		sethasLatePayment(other._hasLatePayment);
		setDebt(other._salary);
		return *this;
	}
	//Setters

	void setName(const char* name) {
		if (name == nullptr) {
			assert(!"Name is nullptr!");
		}
		if (_name != nullptr) {
			delete[] _name;
		}
		size_t len = strlen(name) + 1;
		_name = new char[len];
		strcpy_s(_name, len, name);
	}

	void setworkAddress(const char* workAddress) {
		if (workAddress == nullptr) {
			assert(!"Adress is nullptr!");
		}
		if (_workAddress != nullptr) {
			delete[] _workAddress;
		}
		size_t len = strlen(workAddress) + 1;
		_workAddress = new char[len];
		strcpy_s(_workAddress, len, workAddress);
	}
	void setLiveAddress(const char* LiveAddress) {
		if (LiveAddress == nullptr) {
			assert(!"Address is nullptr!");
		}
		if (_liveAddress != LiveAddress) {
			delete[] _liveAddress;
		}
		size_t len = strlen(LiveAddress) + 1;
		_liveAddress = new char[len];
		strcpy_s(_liveAddress, len, LiveAddress);
	}
	void setPhoneNumber(const char* phoneNumber) {
		if (phoneNumber == nullptr) {
			assert(!"Phone Number is nullptr!");
		}
		if (_phoneNumber != nullptr) {
			delete[] _phoneNumber;
		}
		size_t len = strlen(phoneNumber) + 1;
		_phoneNumber = new char[len];
		strcpy_s(_phoneNumber, len, phoneNumber);
	}
	void sethasLatePayment(bool hasLatePayment) {
		_hasLatePayment = hasLatePayment;
	}
	void setSalary(double salary) {
		if (salary < 0) {
			assert(!"Salary incorrect!!");
		}
		_salary = salary;
	}
	void setDebt(double debt) {
		if (debt < 0) {
			assert(!"Debt incorrect!!");
		}
		_debt = debt;
	}
	void setSurname(const char* surname) {
		if (surname == nullptr) {
			assert(!"Surname is nullptr!");
		}
		if (_surname != nullptr) {
			delete[] _surname;
			_surname = nullptr;
		}
		size_t len = strlen(surname) + 1;
		_surname = new char[len];
		strcpy_s(_surname, len, surname);
	}
	//Getters
	const char* getName() { return _name; }
	const char* getSurname() { return _surname; }
	double getSalary() { return _salary; }
	double getDebt() { return _debt; }
	const char* getLiveAdress() { return _liveAddress; }
	const char* getWorkAddress() { return _workAddress; }
	bool gethasLatePayment() { return _hasLatePayment; }

	void print() {
		cout << "Id: " << _id << endl;
		cout << "Name: " << _name << endl;
		cout << "Surname: " << _surname << endl;
		cout << "WorkAdress: " << _workAddress << endl;
		cout << "LiveAdress: " << _liveAddress << endl;
		cout << "Phone Number: " << _phoneNumber << endl;
		cout << "Salary :" << _salary << endl;
		cout << "Late Payment: " << _hasLatePayment << endl;
		cout << "Debt: " << _debt << endl;
	};

	~Debtor() {
		delete[] _name;
		delete[] _surname;
		delete[] _workAddress;
		delete[] _liveAddress;
		delete[] _phoneNumber;
	}
};

size_t Debtor::_staticId = 0;
class Bank {
private:
	char* _name;
	Debtor** _debtors;
	size_t _count;
public:
	Bank() = default;
	Bank(const char* name, Debtor** debtors, size_t count)
	{
		setName(name);
		_debtors = debtors;
		_count = count;
	}
	//Copy constructor
	Bank(const Bank& other) {
		_name = other._name;
		_debtors = other._debtors;
		_count = other._count;
	}
	//Setters
	void setName(const char* name) {
		if (name == nullptr) {
			assert(!"Name is null!");
		}
		if (_name == nullptr) {
			delete[] _name;
		}
		size_t len = strlen(name) + 1;
		_name = new char[len];
		strcpy_s(_name, len, name);
	}
	//Getters
	const char* getName() { return _name; }
	void printAllDebtors()
	{
		cout << "Bank Name: " << _name << endl;
		for (size_t i = 0; i < _count; i++)
		{
			_debtors[i]->print();
		}
	};
	void printDebtorsDebtGreaterThan(double debt) {
		for (size_t i = 0; i < _count; i++)
		{
			if (_debtors[i]->getDebt() > debt) {
				_debtors[i]->print();
			}
		}
	}
	void printDebtorsWithDelays() {
		for (size_t i = 0; i < _count; i++)
		{
			if (_debtors[i]->getDebt() > 0) {
				_debtors[i]->print();
			}
		}
	};
};

void main() {
	Debtor* d1 = new Debtor("Nizami", "Amirov", "Sheki", "Baku", "0342", 1000, true, 100);
	Debtor* d2 = new Debtor("Aksin", "Ahmedli", "Sheki", "Baku", "0542", 5000, false, 400);
	Debtor* d3 = new Debtor("Revan", "Agazade", "sUMAQYIT", "Sumqayit", "2342", 2000, true, 500);
	Debtor *d4(d3);
	/*d2->print();*/
	//Debtor * d4(d3)

	//d1->setName("mehman");
	//d4->print();

	int size = 3;
	Debtor** debtors = new Debtor * [size] {d1, d2, d3};
	//d1->print();
	Bank b1("Bank1", debtors, size);
	//b1.printAllDebtors();
	//b1.printDebtorsDebtGreaterThan(120);
	/*d1->sethasLatePayment(false);*/
	//b1.printAllDebtors();
}