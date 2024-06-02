#include<iostream>
using namespace std;
void main() {
	//task1
	//int const size = 5;
	//int arr[size][size]{};
	//int max = 20;
	//int min = 0;
	//int cem = 0;
	//for (int i = 0; i < size; i++)
	//{
	//	for (int j = 0; j < size; j++)
	//	{
	//		arr[i][j] =  min + rand() % (max - min + 1);
	//	
	//	}
	//}
	//for (int i = 0; i < size; i++)
	//{
	//	for (int j = 0; j < size; j++)
	//	{	
	//		cout << arr[i][j]<<" ";
	//		cem += arr[i][j];

	//	}
	//	cout << endl;
	//}
	//cout << endl;
	//cout <<"Cem : " << cem;
	//task4
	//int const size = 5;
	//int arr[size][size]{};
	//int max = 5;
	//int min = -5;
	//int musbet = 0;
	//int menfi = 0;
	//int sifir = 0;
	//for (int i = 0; i < size; i++)
	//{
	//	for (int j = 0; j < size; j++)
	//	{
	//		arr[i][j] = min + rand() % (max - min + 1);

	//	}
	//}
	//for (int i = 0; i < size; i++)
	//{
	//	for (int j = 0; j < size; j++)
	//	{
	//		cout << arr[i][j] << " ";

	//		if (arr[i][j] > 0) {
	//			musbet++;
	//		}
	//		else if (arr[i][j] < 0) {
	//			menfi++;
	//		}
	//		else sifir++;

	//	}
	//	cout << endl;
	//}
	//cout << endl;
	//cout << "Musbetlerin cemi : " << musbet << endl;
	//cout << "Menfilerin cemi : " << menfi << endl;
	//cout << "Sifirlarin cemi : " << sifir<<endl;

	//task6

	//int const size = 5;
	/*int arr[size][size]{};
	int max = 20;
	int min = 0;
	int cem1 = 0;
	int cem2 = 0;
	int cem3 = 0;
	int cem = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			arr[i][j] = min + rand() % (max - min + 1);

		}
	}
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << arr[i][j] << " ";

			if (j == 0) {
				cem1 += arr[i][j];
			}
			else if (j == 1) {
				cem2+= arr[i][j];

			}
			else if (j == 2) {
				cem3+= arr[i][j];

			}

		}
		cout << endl;

	}
	cout << "1 ci sutun elementlerin cemi : " << cem1<<endl;
	cout << "2 ci sutun elementlerin cemi : " << cem2<<endl;
	cout << "3 ci sutun elementlerin cemi : " << cem3<<endl;*/

	//task7
	//int const size = 5;
	//srand(time(0));
	//int arr[size][size]{};
	//int max = 40;
	//int min = -10;
	//int cem = 0;
	//for (int i = 0; i < size; i++)
	//{
	//	for (int j = 0; j < size; j++)
	//	{
	//		arr[i][j] = min + rand() % (max - min + 1);

	//	}
	//}
	//for (int i = 0; i < size; i++)
	//{
	//	for (int j = 0; j < size; j++)
	//	{
	//		cout << arr[i][j] << " ";
	//	}cout << endl;
	//}

	//for (int i = 0; i < size; i++)
	//{
	//	cem = 0;
	//	bool menfidir = false;
	//	for (int j = 0; j < size; j++)
	//	{
	//		cem += arr[i][j];
	//		if (arr[i][j] < 0) {
	//			menfidir = true;
	//		}
	//	}
	//	if (!menfidir) {
	//		cout << i + 1 << "-ci setrin cemi : " << cem<<endl;
	//	}
	//	else {
	//		cout << i + 1 << " ci setirde menfi eded var"<<endl;
	//	}
	//}
	// 
	// task8
//#include<iostream>;
//using namespace std;
//void main() {
//	int max = 100;
//	int min = 0;
//	int const size1 = 5;
//	int	const size2 = 5;
//	int arr[size1][size2]{};
//	int b[size1][size2]{};
//	int c[size1][size2]{};
//
//
//	int n = 0;
//	for (int i = 0; i < size1; i++)
//	{
//		arr[i][0] = 10;
//		n = n + 10;
//		for (int k = 0; k < size2; k++)
//		{
//
//			arr[i][k] = k + n;
//
//		}
//
//	}
//	for (int i = 0; i < size1; i++)
//	{
//		for (int k = 0; k < size2; k++)
//		{
//			cout << arr[i][k] << " ";
//		}
//		cout << endl;
//	}
//}
	//task9
	//srand(time(0));
	//int const size = 4;
	//int arr[size][size+1]{};
	//int m = 0;
	//int n = 0;
	//int min = 0;
	//int max = 20;
	//int a[size]{};
	//int b[size]{};

	//for (size_t i = 0; i < size; i++)
	//{
	//	for (size_t k = 0; k < size+1; k++)
	//	{
	//		arr[i][k] = min + rand() % (max-min +1) ;
	//	}
	//}
	//for (size_t i = 0; i < size; i++)
	//{
	//	for (size_t k = 0; k < size+1; k++)
	//	{
	//		cout << arr[i][k] << " ";
	//	}
	//	cout << endl;
	//}
	//cout << endl;

	//for (int i = 0; i < size; i++)
	//{
	//	for (int k = 0; k < size+1; k++)
	//	{
	//		if (k == 0) {
	//			a[i] = arr[i][k];
	//		}
	//		if (k == 4) {
	//			b[i] = arr[i][k];
	//		}
	//		swap(arr[i][4], a[i]);
	//		swap(b[i], arr[i][0]);

	//	}
	//}

	//for (int i = 0; i < size; i++)
	//{
	//	for (int k = 0; k < size + 1; k++)
	//	{
	//	
	//	}
	//}
	//for (size_t i = 0; i < size; i++)
	//{
	//	for (size_t k = 0; k < size + 1; k++)
	//	{
	//	
	//		cout << arr[i][k] << " ";

	//	}
	//	cout << endl;
	//}
	//task10
//	int min = 0;
//	int max = 20;
//	int const size = 6;
//	int arr[size][size]{};
//	for (int i = 0; i < size; i++)
//	{
//		for (int k = 0; k < size; k++)
//		{
//			arr[i][k] = min + rand() % (max - min + 1);
//		}
//	}
//
//	for (int i = 0; i < size; i++)
//	{
//		for (int k = 0; k < size; k++)
//		{
//			cout<<arr[i][k]<<" ";
//		}
//		cout<< endl;
//	}
//
//	for (int i = 0; i < size-1; i++)
//	{
//		for (int k = 0; k < size-1; k++)
//		{
//			swap(arr[i+1][k], arr[i][k]);
//		}
//	}
//	cout << endl;
//	for (int i = 0; i < size; i++)
//	{
//		for (int k = 0; k < size; k++)
//		{
//			cout << arr[i][k] << " ";
//		}
//		cout << endl;
//	}
//}

