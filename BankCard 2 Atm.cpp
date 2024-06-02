
#include<iostream>
#include<string>
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
class Card {
	string PAN;
	string PIN;
	string CVC;
	Date ExpireDate;
	float Balance;
public:
	Card() = default;
	Card(string PAN, string PIN, string CVC, Date ExpireDate, float Balance)
	{
		this->PAN = PAN;
		this->PIN = PIN;
		this->CVC = CVC;
		this->ExpireDate = ExpireDate;
		this->Balance = Balance;
	}
	string getPin() { return PIN; }
	float getBalance() { return Balance; }
	void setBalace(float newBalance) {
		this->Balance = newBalance;
	}
};

class User {
	string name;
	string surname;
	Card creditCard;
public:
	User(string name, string surname, Card creditCard)
	{
		this->name = name;
		this->surname = surname;
		this->creditCard = creditCard;
	}
};

void Display(Card cards[]) {
	string pin;
	cout << "Pini daxil edin : ";
	cin>>pin;
	cin.ignore();
	for (size_t i = 0; i < 4; i++)
	{
		if (cards[i].getPin() == pin) {
			int choice = 0;
			float mebleg = 0;
			float balance = cards[i].getBalance();
			cout << "1.Balance " << endl;
			cout << "2.Nagd pul " << endl;
			cout << "3.Karta pul kocurme" << endl;
			cout << "4.Edilen emeliyyatlarin siyahisi :" << endl;
			cout << "Choice: ";
			cin >> choice;
			cout << endl;
			if (choice == 1) {
				cout << cards[i].getBalance();
				cout << endl;
			}

			else if (choice == 2) {
				cout << "1.10 azn :" << endl;
				cout << "2.20 azn :" << endl;
				cout << "3.50 azn :" << endl;
				cout << "4.100 azn :" << endl;
				cout << "5.Diger mebleg: " << endl;
				cout << "Secim :";
				cin >> mebleg;
				if (mebleg >= balance) {
					cerr << "Not enough money!";

				}
				if (mebleg == 1) {
					float newBalance = balance - 10;
					cards[i].setBalace(newBalance);
				}
				if (mebleg == 2) {
					float newBalance = balance - 20;
					cards[i].setBalace(newBalance);
				}
				if (mebleg == 3) {
					float newBalance = balance - 50;
					cards[i].setBalace(newBalance);
				}
				if (mebleg == 4) {
					float newBalance = balance - 100;
					cards[i].setBalace(newBalance);
				}
				if (mebleg == 5) {
					float newmebleg = 0;
					cout << "Meglegi daxil edin : ";
					cin >> newmebleg;
					float newBalance = balance - newmebleg;
					cards[i].setBalace(newBalance);
				}

			}
			//if(choice == 4){
			else if (choice == 3) {
				int pinn;
				cout << "Hansi karta kocurme etmek isteyrisz? Pin : ";
				cin >> pinn;
				string pin2 = to_string(pinn);
				for (size_t i = 0; i < 4; i++)
				{
					if (pin2 == cards[i].getPin()) {
						float mebleg2 = 0;
						cout << "Kocurmek istediyiniz meblegi secin : ";
						cin >> mebleg2;
						float balance = cards[i].getBalance();
						float newBalance = mebleg2 + balance;
						cards[i].setBalace(newBalance);
						cout << "Balnce kocurme ugurlu...";
						break;
					}
				}
				break;
				cout << "Bele bir kart tapilmadi..";
				cout << endl;
			}
		}
	}
	Display(cards);
}

void main() {
	Date d1("18", "2", "2020");
	Date d2("10", "4", "2018");
	Date d3("9", "3", "2010");
	Date d4("11", "2", "2040");
	Card card1("131313141414157", "1881", "828", d1, 3000);
	Card card2("65464474724658", "1281", "213", d2, 4000);
	Card card3("174743131347", "1981", "134", d3, 5000);
	Card card4("4747474774747", "1181", "411", d4, 6000);

	Card cards[4]{ card1,card2,card3,card4 };

	User* u1 = new User("Nizami", "Amirov", card1);
	User* u2 = new User("Akisn", "Ahmedli", card2);
	User* u3 = new User("Revan", "Ahayev", card3);
	User* u4 = new User("Ayxcan", "Ayxan", card4);
	int size = 4;
	User** users = new User * [size] { u1, u2, u3, u4 };
	Display(cards);
}