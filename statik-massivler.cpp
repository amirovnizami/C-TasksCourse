#include<iostream>
using namespace std;
void main() {
	//task1
	//int const size = 5;
	//int arr[size]{};
	//cout << "Ededleri daxil edin : ";

	//for (int i = 0; i < size; i++)
	//{
	//	cin >> arr[i];
	//}
	//for (int i = size-1; i >=0; i--)
	//{
	//	cout << arr[i] << endl;
	//}

	//task2
	/*int const size = 20;
	int arr[size]{};
	cout << "Ededleri daxil edin : " << endl;

	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < size; i++)
	{
		if (i % 2 == 0) {
			cout <<"indeksleri cut olanlar: " << arr[i] << " ";
		}
	}*/
	//task3
	//srand(time(0));
	//float umumi_say = 0;
	//float say = 0;
	//int min = -20;
	//int max = 20;
	//int arr[10]{};

	//for (int i = 0; i < 10; i++)
	//{
	//	arr[i] = min + rand() % (max - min + 1);
	//	cout << arr[i]<<endl;
	//}
	//for (int i = 0; i < 10; i++)
	//{
	//	umumi_say ++;
	//	if (arr[i] > 0) {
	//		say++;
	//	}
	//}
	//cout << "Musbet ededlerin ededi ortasi : " << (say / umumi_say) * 100;

	//task4
	//srand(time(0));
	//float umumi_say = 0;
	//float musbet = 0;
	//float menfi = 0;
	//float sifir = 0;
	//int min = -5;
	//int max = 5;
	//int arr[20]{};

	//for (int i = 0; i < 20; i++)
	//{
	//	arr[i] = min + rand() % (max - min + 1);
	//	cout << arr[i]<<endl;
	//}
	//for (int i = 0; i < 20; i++)
	//{
	//	umumi_say ++;
	//	if (arr[i] > 0) {
	//		musbet++;
	//	}
	//	else if (arr[i] < 0) {
	//		menfi++;
	//	}
	//	else sifir++;
	//}
	//cout << "Musbetlerin sayi : " << musbet << endl;
	//cout << "Menfilerin sayi : " << menfi << endl;
	//cout << "Sifirlarin sayi : " << sifir << endl;

	//task5

	//srand(time(0));
	//float umumi_say = 0;
	//float tek = 0;
	//int cem = 0;
	//int ededi_orta = 0;
	//int min = -5;
	//int max = 5;
	//int const size = 10;
	//int arr[size]{};

	//for (int i = 0; i < size; i++)
	//{
	//	arr[i] = min + rand() % (max - min + 1);
	//	cout << arr[i] << endl;
	//}
	//for (int i = 0; i < size; i++)
	//{
	//	umumi_say++;
	//	if (i % 2 == 0) {
	//		cem += arr[i];
	//	}
	//	else {
	//		tek++;
	//	}
	//}
	//ededi_orta = (tek / umumi_say) * 100;
	//cout << "Cutlerin cemi : " << cem << endl;
	//cout << "Teklerin ededi ortasi : " << ededi_orta<<endl;

	//task6
	//srand(time(0));
	//int const size = 10;
	//int reqem = 0;
	//int herf = 0;
	//int pantukasiya = 0;
	//int max = 0;
	//int min = 255;
	//char arr[size]{};
	//for (int i = 0; i < size; i++)
	//{
	//	arr[i] = min + rand() % (max - min + 1);
	//	cout << arr[i]<< " ";
	//}

	//for (int i = 0; i < size; i++)
	//{
	//	if (sizeof(arr[i]) == 4) {
	//		reqem++;
	//	}
	//	else if (sizeof(arr[i]) == 1) {
	//		herf++;
	//	}
	//	else {
	//		pantukasiya++;
	//	}
	//}
	//cout << "Reqemlerin sayi : " << reqem << endl;
	//cout << "Herflerin sayi : " << herf << endl;
	//cout << "Pantukasiylarin sayi : " << pantukasiya << endl;


	//task7
	//srand(time(0));
	//int const size = 50;
	//int arr[size]{};
	//int min = 1;
	//int max = 100;
	//int eded = 0;
	//int say = 0;

	//cout << "Ededi daxil edin : ";
	//cin >> eded;

	//for (int i = 0; i < size; i++)
	//{
	//	arr[i] = min + rand() % (max - min + 1);
	//	cout << arr[i] << " "<<endl;
	//}
	//for (int i = 0; i < size; i++)
	//{
	//	if (arr[i] == eded) {
	//		say++;
	//	}
	//}
	//cout << "Daxil etdyiniz ededin sayI : " << say;

	//task8
	//asand eyni
	//task9
	//asand eyni
	//task10
	/*srand(time(0));
	int const size = 10;
	int min = -10;
	int max = 30;
	int cem = 0;
	int index = 0;
	int arr[size]{};
	cout << "Massivin elementleri: "<<endl;
	for (int i = 0; i < size; i++)
	{
		arr[i] = min + rand() % (max - min + 1);
		cout << arr[i] << " "<<endl;
	}
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0)
			{
			index = i;
			for (int i = index+1; i < size; i++)
			{
				cem += arr[i];
			}
			break;
		}
	}
	cout << "Cem : " << cem;*/

	//task11
	//int const size = 10;
	//int min = -10;
	//int max = 30;
	//int cem = 0;
	//int index = 0;
	//int arr[size]{};
	//cout << "Massivin elementleri: " << endl;
	//for (int i = 0; i < size; i++)
	//{
	//	arr[i] = min + rand() % (max - min + 1);
	//	cout << arr[i] << " " << endl;
	//}
	//for (int i = 0; i < size; i++)
	//{
	//	if (arr[i] > 0)
	//	{
	//		index = i;
	//		for (int i = index + 1; i < size; i++)
	//		{
	//			cem += arr[i];
	//		}
	//		break;
	//	}
	//}
	//cout << "Cem : " << cem; 
	
	//task12
	//srand(time(0));
	//int index_max, index_min;
	//int maxx;
	//int minn;
	//int min = -10;
	//int max = 10;
	//int const size = 10;
	//int arr[size]{};
	//for (int i = 0; i < size; i++)
	//{
	//	arr[i] = min + rand() % (max - min + 1);
	//	cout << arr[i]<<endl;
	//}
	//maxx = arr[0];
	//for (int i = 0; i < size; i++)
	//{
	//	if (arr[i] > maxx) {
	//		maxx = arr[i];
	//		index_max = i;
	//	}
	//}
	//minn = arr[0];
	//for (int i = 0; i < size; i++)
	//{
	//	if (arr[i] < minn) {
	//		minn = arr[i];
	//		index_min = i;

	//	}
	//}
	//cout << "Max: " << maxx <<" ,Indeksi : "<<index_max << endl;
	//cout << "Min: " << minn <<" ,Indeksi : "<<index_min << endl;

	//task13
	//int const size = 10;
	//float arr[size]{};
	//int say_int = 0;
	//int say_float = 0;
	//cout << "Massivi daxil edin : ";
	//for (int i = 0; i < size; i++)
	//{
	//	cin >> arr[i];
	//	
	//}
	//for (int i = 0; i < size; i++)
	//{
	//	if (arr[i] - int (arr[i]) == 0 ) {
	//		say_int++;
	//	}
	//	else  {
	//		say_float++;
	//	}
	//}
	//cout << "Kesr hissesi olmayan ededler : " << say_int << endl;
	//cout << "Kesr hissesi olan ededler : " << say_float << endl;
	
	//task14
//srand(time(0));
//int const size = 20;
//int arr[size]{};
//int min = 1;
//int max = 200;
//int bir = 0;
//int iki = 0;
//int uc = 0;
//cout << "Massivi daxil edin (max 3 reqemli eded) : ";
//for (int i = 0; i < size; i++)
//{
//	arr[i] = min + rand() % (max - min + 1);
//	cout << arr[i] << " ";
//}
//cout << endl;
//for (int i = 0; i < size; i++)
//{
//	if (arr[i] / 10  == 0) {
//		bir++;
//	}
//	else if (arr[i] / 10 > 0 && arr[i] / 10 < 10) {
//		iki++;
//	}
//	else {
//		uc++;
//	}
//	
//}
//cout << "Birreqemli : " << bir << endl;;
//cout << "Ikireqemli : " << iki << endl;;
//cout << "Ucreqemli : " << uc<<endl;

//task15

//
//srand(time(0));
//int const size = 20;
//int arr[size]{};
//int min = 2;
//int max = 200;
//int bolen = 0;
//int index = 0;
//for (int i = 0; i < size; i++)
//{
//	arr[i] = min + rand() % (max - min + 1);
//	cout << arr[i] << " ";
//}
//cout << endl;
//for (int i = 0; i < size; i++)
//{
//	bolen = 0;
//	int eded = arr[i];
//	index = 1;
//	while (index <=eded) {
//		if (arr[i] % index == 0) {
//			bolen++;
//		}
//		index++;
//	}
//	if (bolen == 2) {
//		cout << arr[i]<<" ";
//	}
//
//}

//task16
//srand(time(0));
//int i = 0;
//int j = 9;
//int const size = 10;
//int min = 0;
//int max = 100;
//int arr[size]{};
//for (int i = 0; i < size; i++)
//{
//	arr[i] = min + rand() % (max - min + 1);
//	cout << arr[i] << " " ;
//}
//cout << endl;
//for ( i = 0; i < size/2; i++)
//{
//	swap(arr[i] , arr[size-i-1]);
//}
//for (int i = 0; i < size; i++)
//{
//	cout << arr[i] << " ";
//}

//task17

//srand(time(0));
//int i = 0;
//int j = 9;
//int const size = 10;
//int min = 0;
//int max = 100;
//int arr[size]{};
//for (int i = 0; i < size; i++)
//{
//	arr[i] = min + rand() % (max - min + 1);
//	cout << arr[i] << " " ;
//}
//cout << endl;
//for ( i = 0; i < size-1; i++)
//{
//	swap(arr[i] , arr[i +1]);
//}
//for (int i = 0; i < size; i++)
//{
//	cout << arr[i] << " ";
//}

//task18
//
//int a[5]{ 4,3,13,5,87 };
//int b[5]{ 41,23,33,51,47 };
//int c[10]{};
//
//
//for (int i = 0; i < 5; i++){
//	c[2 * i] = a[i];
//	c[2 * i +1] = b[i];
//}
//cout << "C massivi : ";
//for (size_t i = 0; i < 10; i++)
//{
//	cout << c[i] << " ";
//}
//task19
//int a[]{ 1,-2,3,-4,5 };
//int b[5]{};
//int i = 0;
//while (i<5)
//{
//	for (int j = 0; j < 5; j++)
//	{
//		if (a[j] < 0) {
//			b[i] = a[j];
//			i++;
//		}
//
//	}
//	break;
//	};
//while (i < 5)
//{
//	for (int j = 0; j < 5; j++)
//	{
//		if (a[j] > 0) {
//			b[i] = a[j];
//			i++;
//		}
//
//	}
//	break;
//};
//cout << "B massivi: ";
//for (int i = 0; i < 5; i++)
//{
//	cout << b[i] << " ";
//}

//task20

//int c[10]{1,2,3,4,5,6,7,8,9,10};
//int a[5]{};
//int b[5]{};
//int i = 0;
//cout << "C massivi : ";
//for (int i = 0; i < 10; i++)
//{
//	cout << c[i] << " ";
//}
//cout << endl;
//while (i < 10 )
//{
//	for (int j = 0; j < 5; j++)
//	{
//		a[j] = c[i * 2];
//		//b[2 * j + 1] = c[i];
//		i++;
//	}
//	break;
//}
//i = 0;
//while (i < 10) {
//	for (int k = 0; k < 5; k++)
//	{
//		b[k] = c[i * 2 + 1];
//		i++;
//	}
//	break;
//}
//
//cout<< "a massivi : ";
//for (int j = 0; j < 5; j++)
//{
//	cout << a[j] << " ";
//}
//cout << endl;
//
//cout << "b massivi : ";
//for (int k = 0; k < 5; k++)
//{
//	cout << b[k] << " ";
//}
}