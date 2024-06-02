#include<iostream>
#include <windows.h>
#include <cstdlib>
using namespace std;
void main() {
	int const size = 5;
	int bilet1[size]{};
	int bilet2[size]{};
	int bilet3[size]{};
	int torba[100]{};
	int say1 = 0;
	int say2 = 0;
	int say3 = 0;
	srand(time(0));
	int min = 1;
	int max = 100;
	for (int i = 0; i < size; i++)
	{
		bilet1[i] = min + rand() % (max - min + 1);
		bilet2[i] = min + rand() % (max - min + 1);
		bilet3[i] = min + rand() % (max - min + 1);
	}

	cout << "Bilet 1 : ";
	for (int i = 0; i < size; i++)
	{
		cout << bilet1[i] << " ";
	}
	cout << endl;
	cout << "Bilet 2 : ";
	for (int i = 0; i < size; i++)
	{
		cout << bilet2[i] << " ";
	}
	cout << endl;
	cout << "Bilet 3 : ";

	for (int i = 0; i < size; i++)
	{
		cout << bilet3[i] << " ";
	}
	cout << endl;

	//Torbanin yaradilmasi
	
	for (int i = 1; i < 100; i++)
	{
		torba[i] = i;
	}
	//Torbadaki ededlerin qarisdirilmasi
	for (int i = 1; i < 100; ++i) {
		int rastgeleIndex = rand() % 100;
		swap(torba[i], torba[rastgeleIndex]);
	}
	//Torbadan ededin cixarilmasi ve yoxlanilmasi
		
		
	int cixarilan_eded = 0;
	for (int i = 1; i < 100; i++)

	{
		cixarilan_eded = torba[i];
		cout << "Cixarilan eded : "<<cixarilan_eded << endl;
		Sleep(1000);
		system("cls");

		for (int i = 0; i < size; i++)
		{
		
			if (bilet1[i] == cixarilan_eded) {
				bilet1[i] = -1;
				say1++;
			}
			else if (bilet2[i] == cixarilan_eded) {
				bilet2[i] = -1;
				say2++;
			}
			else if (bilet3[i] == cixarilan_eded) {
				bilet3[i] = -1;
				say3++;
			}
		}
		
		cout << "Bilet1 : ";
		for (int i = 0; i < size; i++)
		{
			if (bilet1[i] != -1) {
				cout << bilet1[i] << " ";
			}
		}
		cout << endl;
		cout << "Bilet2 : ";
		for (int i = 0; i < size; i++)
		{
			if (bilet2[i] != -1) {
				cout << bilet2[i] << " ";
			}
		}
		cout << endl;
		cout << "Bilet3 : ";
		for (int i = 0; i < size; i++)
		{
			if (bilet3[i] != -1) {
				cout << bilet3[i] << " ";
			}
		}
		cout << endl;
		cout << endl;
		Sleep(1000);
		
		if (say1 == 5) {
			cout << "Birinci oyuncu qazandi! ";
			break;

		}
		else if (say2 == 5) {
			cout << "Ikinci oyuncu qazandi!";
			break;
		}
		else if (say3 == 5) {
			cout << "Ucuncu oyuncu qazandi!";
			break;
		}

	}
	


}

