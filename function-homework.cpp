#include<iostream>
using namespace std;
//void main() {


	//task1
	//int kub(int num) {
	//	return num * num * num;
	//}
	//
	//void main() {
	//	cout<<kub(5);
	//}

	//task2

	//int boyuk_eded(int num1, int num2)
	//{
	//	if (num1 > num2) {
	//		return num1;
	//	}
	//	else return num2;
	//}

	//void main() {
	//	cout<<boyuk_eded(3, 8);
	//}
	// 
	// task3
//int musbet_menfi(int num1) {
//	if (num1 > 0) {
//		return true;
//	}
//	else return false;
//}
//
//void main() {
//	cout << musbet_menfi(-2);
//}

	//task4

	//
	//int vurma(int num1, int num2) {
	//	return num1 * num2;
	//}
	//int toplama(int num1, int num2) {
	//	return num1 + num2;
	//}
	//int cixma(int num1, int num2) {
	//	return num1 - num2;
	//}
	//int bolme(int num1, int num2) {
	//	return num1 / num2;
	//}
	//int main() {
	//	char choice = 0;
	//	int eded1 = 0;
	//	int eded2 = 0;
	//	cout << "Eded1 : ";
	//	cin >> eded1;
	//	cout << "Eded2 : ";
	//	cin >> eded2;
	//	cout << "Choice : ";
	//	cin >> choice;
	//	switch (choice)
	//	{
	//	case '*': cout << vurma(eded1, eded2); break;
	//	case '-': cout << cixma(eded1, eded2); break;
	//	case '/': cout << bolme(eded1, eded2); break;
	//	case '+': cout << toplama(eded1, eded2); break;
	//	}
	//}

	//task5
	//void kvadrat(int uz) {
	//	for (int j = 0; j < uz; j++)
	//	{
	//		for (int i = 0; i < uz; i++)
	//		{
	//			cout << "*" << " ";
	//		}
	//		cout << endl;
	//	}
	//	
	//}
	//void main() {
	//	int uz = 0;
	//	cout << "Terefini girin : ";
	//	cin >> uz;

	//	kvadrat(uz);

	//task6
	/*void sadedirmi(int num) {
		int bolen = 0;
		int n = 1;
		while (n < num){
			if (num % n == 0) {
				bolen++;
			}
			n++;
		}
		if (bolen > 2) {
			cout << "Murekkebdir";
		}
		else cout << "Sadedir";
	}

	void main() {
		int eded = 0;
		cout << "Eded: ";
		cin >> eded;
		sadedirmi(eded);
	}*/

	//task7
	//int faktorial(int num) {
	//	int hasil = 1;
	//	int n = 1;
	//	while (n < num) {
	//		hasil += hasil * n;
	//		n++;
	//	}
	//	return hasil;
	//}

	//void main() {
	//	int eded = 0;
	//	cout << "Ededi daxil edin : ";
	//	cin >> eded;
	//	cout << "Faktorial : " << faktorial(eded);
	//}
	//task8
	// 
	//int quvvet(int num1, int num2) {
	//	int n = 0;
	//	int cavab = 0;
	//	while (n < num2) {
	//		cavab += num1 * num1;
	//		n++;
	//	}
	//	return cavab;
	//}

	//void main() {
	//	int eded = 0;
	//	int ust = 0;
	//	cout << "Ededi girin : ";
	//	cin >> eded;
	//	cout << "Ustu girin : ";
	//	cin >> ust;
	//	cout<<"Ededin quvveti : "<<quvvet(eded, ust);
	//}
	// task9
	//int toplama(int num1, int num2) {
	//	int cem = 0;
	//	for (int i = num1+ 1; i < num2; i++)
	//	{
	//		cem += i;
	//	}
	//	return cem;
	//}
	//void main() {
	//	int eded1 = 0;
	//	int eded2 = 0;
	//	cout << "Eded1 : ";
	//	cin >> eded1;
	//	cout << "Eded2: ";
	//	cin >> eded2;
	//	cout << "Ededlerin cemi : " << toplama(eded1, eded2);
	//}
	// 
	// task10
	//int maxElement(int *arr,int size){
	//	int max = 0;
	//	max = arr[0];
	//	for (int i = 0; i <size; i++)
	//	{
	//		if (arr[i] > max) {
	//			max = arr[i];
	//		}
	//	}
	//	return max;

	//}
	//void main() {
	//	int const size = 5;
	//	int arr[]{ 12, 4, 41, 43, 54 };
	//	cout << "Max element of array : " << maxElement(arr,size);
	//}
//}