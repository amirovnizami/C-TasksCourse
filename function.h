#pragma once
extern void (**func_Ptrs1)(int);
extern void (**func_Ptrs2)();
float balance = 0;
int pin = 1234;
void Balance() {
	cout << "Balance : "<<balance;
}

void cashIn(int amount) {
	balance += amount;
}
void cashOut(int amount) {
	 balance -= amount;
}
void changePin() {
	int oldPin = 0;
	int newPin = 0;
	cout << "Old Pin : ";
	cin >> oldPin;
	if (oldPin == pin) {
		cout << "New Pin : ";
		cin >> newPin;
		pin = newPin;
	}
	else cout << "Old pin incorrect!";
	
}

void Display() {
	while (true) {
		cout << endl;

		cout << "Secimler : " << endl;
		cout << "1.Balance : " << endl;
		cout << "2.CashIN : " << endl;
		cout << "3.CashOut : " << endl;
		cout << "4.ChnagePin : " << endl;
		cout << "5.Exit : " << endl;

		int  secim = 0;
		cout << "Choice: ";
		cin >> secim;
		if (secim == 1) {
			func_Ptrs2[0]();
		}
		else if (secim == 2) {
			int amount = 0;
			cout << "Amount: ";
			cin >> amount;
			func_Ptrs1[0](amount);
		}
		else if (secim == 3) {
			int amount = 0;
			cout << "Amount: ";
			cin >> amount;
			func_Ptrs1[1](amount);
		}
		else if (secim == 4) {
			changePin();
		}
		else if (secim == 5) {
			break;
		}
		else cout << "Incorrect choice!!";

	}
}

void Atm() {
	int count = 0;
	while (count < 4)
	{
		int Inputpin = 0;
		cout << "Pin : ";
		cin >> Inputpin;

		if (Inputpin == pin) {
			Display();
		}
		else {
			cout << "Incorrect Pin !"<<endl;
		}
	}
	cout << "No access!!";
}


//#include<iostream>
//using namespace std;
//#include"function.h";
//
//
//void (**func_Ptrs1)(int) = new (void(*[2])(int)){
//	cashIn,
//	cashOut
//};
//void (**func_Ptrs2)() = new (void(*[2])()){
//	Balance,
//	Display
//};
//void main() {
//	Atm();
//}
