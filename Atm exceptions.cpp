#include<iostream>
#include<string>
using namespace std;

class Atm {
public:
	float balance;
	string pin;
	Atm(float balance, string pin) :balance(balance), pin(pin) {};

	void Display() {
		int choice = 0;
		cout << "1.Cash in : " << endl;
		cout << "2.ShowBalance : " << endl;
		cout << "3.Change Password : " << endl;
		cout << "4.Exit : " << endl;
		cout << "Choice : ";
		cin >> choice;
		if (choice == 1) {
			cashIn();
		}
		else if (choice == 2) {
			showBalance();
		}
		else if (choice == 3) {
			changePassword();
		}
		else if (choice == 4) {
			return;
		}
	}
	void cashIn() {
		float mebleg = 0;
		cout << "Cixarmaq istediyiniz meblegi secin : ";
		cin >> mebleg;
		try
		{
			if (mebleg > balance) {
				throw "Not enough balance!";
			}
			else balance = balance - mebleg;
		}
		catch (const char* msg)
		{
			cout << msg << endl;
		}
	}
	void showBalance() {
		cout << balance;
	}
	void changePassword() {
		string oldPin;
		string newPin;
		int n = 0;
		while (n < 3) {
			cout << "Old pin: ";
			cin >> oldPin;
			try {
				if (oldPin == pin) {
					cout << "New pin : ";
					cin >> newPin;
					pin = newPin;
					cout<< "Password is changed!";
					return;
				}
				throw "Old pin incorrect!";
			}
			
			catch(const char*msg){

				cout << msg << endl;
				n += 1;
			}
			
		}
		cout << "Try again later!"<<endl;
		
	}
	void Enter() {
		int n = 0;
		while (n < 3) {

			string enterPin;
			cout << "Pini daxil edin : ";
			cin >> enterPin;

			if (pin == enterPin) {
				Display();
				return;
			}
			else {
				cout << "Incorrect Pin!!" << endl;
				n++;
			}
		}
	}
};

void main() {
	Atm a1(100, "nizami123");
	while (true){
		a1.Enter();
	}
	
}