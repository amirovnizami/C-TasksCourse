#include<iostream>
#include <fstream>
#include <string>
using namespace std;
FILE* file;

class Contact {
public:
	string _name;
	string _number;
	Contact()
	{
		_name = "No name";
		_number = "No number";
	}
	Contact(string name, string number)
	{
		this->_name = name;
		this->_number = number;
	}
	//Getters
	string getName() {
		return _name;
	}
	string getNumber() {
		return _number;
	}
	void print() {
		cout << "Name : " << _name << endl;
		cout << "Number : " << _number << endl;
	}
	//Setters
	void setName(string name) {
		if (name.empty()) {
			cerr << "Name is Empty!";
		}
		if (!_name.empty()) {
			_name.clear();
		}
		_name = name;
	}
	void setNumber(string number) {
		if (number.empty()) {
			cerr << "Number is Empty!";
		}
		if (!_number.empty()) {
			_name.clear();
		}
		_number = number;
	}
};
class Contacts {
	size_t size;
	Contact** contacts;
public:
	Contacts(size_t size, Contact** contacts)
	{
		this->size = size;
		this->contacts = contacts;
	}
	void createFile(const char* fileName) {
		ofstream newTxt(fileName);
		newTxt.close();
	}
	void appendContact(Contact contact, const char* filename) {
		string name = contact._name;
		string number = contact._number;
		ifstream readTxt(filename);
		if (!readTxt) {
			createFile(filename);
			/*cerr << "Folder couldn't be opened!" << std::endl;
			return;*/
		}
		ofstream appendTxt(filename, ios::app);
		if (!appendTxt) {
			cerr << "Error opening file!" << endl;
			return;
		}
		string line;
		bool contactExists = false;
		while (getline(readTxt, line)) {
			size_t seperate = line.find("-");
			string ad = line.substr(0, seperate);
			string nomre = line.substr(seperate + 1);

			if (ad == name) {
				cout << "File is already exist!" << endl;
				contactExists = true;
				break;
			}
		}
		if (!contactExists) {
			appendTxt << name << "-" << number << endl;
			cout << "Contact appended successfully!" << endl;
		}
		appendTxt.close();
	}
	bool searchByName(const char* filename, const char* name) {
		ifstream readTxt(filename);

		if (!readTxt) {
			cerr << "File could't be opened!";
		}
		string line;
		while (getline(readTxt, line)) {
			//Nomre ve Adi ayirmaq
			size_t separeted = line.find("-");
			string name2 = line.substr(0, separeted);
			string number2 = line.substr(separeted + 1);

			if (name == name2) {
				cout << name2 << "-" << number2;
				readTxt.close();
				return true;
			}
		}
		cout << "Name is not found!";
		readTxt.close();
		return false;
		
	}

	bool searchByNumber(const char* filename, const char* number) {

		ifstream readTxt(filename);

		if (!readTxt) {
			cerr << "File could't be opened!";
		}
		string line;
		while (getline(readTxt, line)) {
			size_t seperated = line.find("-");
			string name2 = line.substr(0, seperated);
			string number2 = line.substr(seperated + 1);

			if (number == number2) {
				cout << name2 << "-" << number2;
				readTxt.close();
				return true;
			}
		}
		cout << "Number is not found!";
		readTxt.close();
		return false;
		
	}

	void deleteByName(const char* fileName, const char* name) {
		ifstream fileIn(fileName);
		ofstream fileOut("temp.txt");

		if (!fileIn || !fileOut) {
			cerr << "File could't be opened!" << endl;
			return;
		}
		string line;
		bool found = false;
		while (getline(fileIn, line)) {
			if (line.find(name) !=0) {
				fileOut << line << endl;
			}
			else {
				found = true;
			}
		}
		fileIn.close();
		fileOut.close();
		remove(fileName);
		rename("temp.txt", fileName);

		if (found) {
			cout << "Name deleted successfuly!" << endl;
		}
		else {
			cout << "Name is not found!" << endl;
		}
	}
	void NumberEditByName(const char* fileName, const char* name, const char* newNumber) {
		ifstream readtxt(fileName);
		ofstream writetxt("temp.txt", ios::app); 

		if (!readtxt) {
			cerr << "Error file could't opened!!" << endl;
			return;
		}

		string line;
		while (getline(readtxt, line)) {
			size_t seperated = line.find("-");
			string ad = line.substr(0,seperated);
			string nomre = line.substr(seperated + 1);

			if (ad == name) {
				writetxt << ad << "-" << newNumber << endl;
			}
			else {
				writetxt << ad << "-" << nomre << endl;
			}
		}
		readtxt.close();
		writetxt.close();
		remove(fileName);
		rename("temp.txt", fileName);
	}
	void showAllContacts(const char* fileName) {
		FILE* file;
		fopen_s(&file, fileName, "r");
		if (file)
		{
			char symbol = getc(file);

			while (symbol != EOF)
			{
				cout << symbol;
				symbol = getc(file);
			}
		}

	}

};
void main() {
	Contact* c1 = new Contact("Nizami", "0506545236");
	Contact* c2 = new Contact("Aksin", "0504375405");
	Contact* c3 = new Contact("Nahid", "23424324242");
	Contact* c4 = new Contact("Nazim", "078678668686");
	Contact* c5 = new Contact("Fazil", "078678668686");
	int size = 5;
	Contact** contacts1 = new Contact * [size] {c1, c2, c3, c4, c5};
	Contacts g1(size, contacts1);
	const char* filename = R"(C:\Users\amiro\OneDrive - Baku State University\Desktop\Contact.txt)";
	g1.appendContact(*c1, filename);
	g1.appendContact(*c2, filename);
	g1.appendContact(*c3, filename);
	g1.appendContact(*c4, filename);
	g1.appendContact(*c5, filename);
	/*g1.deleteByName(filename, "Nizami");*/
	//g1.deleteByName(filename, "Aksin");
	//g1.NumberEditByName(filename, "Aksin", "11111");
	//g1.appendContact(*c1,filename);
	//g1.NumberEditByName(filename, "Nizami", "31");
	//g1.searchByName(filename, "Aksin");
	//g1.showAllContacts(filename);
}