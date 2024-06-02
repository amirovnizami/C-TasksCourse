//#include<iostream>
//using namespace std;
//int main(){
//int eded = 0;
//	int reqem = 0;
//	cout << "Ededi daxil edin : ";
//	cin >> eded;
//	while (eded != 0) {
//		reqem = eded % 10;
//		eded = eded / 10;
//		
//		cout << reqem;
//    }

#include <iostream>
using namespace std;
void main() {
	int a[size]{ 1, 4, 3, 42, 6 };
	int const size = 5;
	for (int i = 0; i < size; i++)
	{
		cout << a[i];
	}
}