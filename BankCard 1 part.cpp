
#include<iostream>
#include<cstring>
#include <string>
using namespace std;

class Date {
	string day;
	string month;
	string year;
public:
	Date() = default;
	Date(string day, string month, string year)
	{
		this->day = day;
		this->month = month;
		this->year = year;
	}
};
class BankCard {

	string BankName;
	string FullName;
	string PAN;
	string PIN;
	string CVC;
	Date ExpireDate;
	float Balance;
public:
	BankCard() = default;
	BankCard(string BankName, string FullName, string PAN, string PIN, string CVC, Date ExpireDate, float Balance)
	{
		this->BankName = BankName;
		this->FullName = FullName;
		this->PAN = PAN;
		this->PIN = PIN;
		this->CVC = CVC;
		this->ExpireDate = ExpireDate;
		this->Balance = Balance;
	}
	void show() {
		cout << "Bank Name : " << BankName << endl;
		cout << "PAN : " << PAN << endl;
		cout << "Balance : " << Balance << endl;
	}
};

class Client {

	int id;
	string name;
	string surname;

public:
	BankCard bankaccount;
	Client(int id, string name, string surname, BankCard bankaccount)
	{
		this->id = id;
		this->name = name;
		this->surname = surname;
		this->bankaccount =  bankaccount;
	}
};
class Bank {
	size_t count;
	Client **clients;
public:
	Bank(size_t count, Client** clients)
	{
		this->count = count;
		this->clients = clients;
	}
	void showCardBalance() {
		for (size_t i = 0; i < count; i++)
		{
			clients[i]->bankaccount.show();
		}
	};
};

void main() {
	Date d1("12", "2", "2020");
	Date d2("17", "5", "2023");
	Date d3("1", "4", "2018");
	BankCard card1("Kapital", "Nizami", "123135344354464", "1881", "828", d1, 1000);
	BankCard card2("LeoBank", "Aksin", "654335344354464", "1711", "123", d2, 2000);
	BankCard card3("UniBank", "Revan", "43125412431141", "1001", "134", d3, 3000);
	int size = 3;
	BankCard* accounts = new BankCard[size]{card1,card2,card3};

	Client *C1 = new Client(1, "Nizami", "Amirov", card1);
	Client *C2 = new Client(2, "Aksin", "Ahmedli", card2);
	Client *C3 = new Client (3, "Revan", "Agayev", card3);

	/*const int size2 = 3;
	int arr[size2]{C1,C2,C3};*/
	

	Client** clients = new Client * [size] { C1, C2, C3 };
	Bank b1(3, clients);
	b1.showCardBalance();
}