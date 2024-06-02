#include<iostream>
using namespace std;
	//task3 Dinamik massivi ekrana cixarmaq
	void printArr(int* arr, int size) {
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
	}
	//task1 Dinamik massivi random ededlerler doldurma
	void fillArr(int* arr, int size) {
		srand(time(0));
		for (size_t i = 0; i < size; i++)
		{
			arr[i] = rand() % 10;
		}
	}
	//task4 Dinamik massivi silen funskiya
	void  deleteArr(int* arr ) {
		delete[] arr;
	}
	//task5 Massive element elave etmek
	//int* appendArr(int* arr, int* size, int num) {
	//	int* newArr = new int[*size + 1];

	//	for (size_t i = 0; i < *size; i++)
	//	{
	//		newArr[i] = arr[i];
	//	}
	//	newArr[*size] = num;
	//	//(*size)++;
	//	delete[] arr;
	//	arr = nullptr;
	//	return newArr;
	//}
	//task6 indekse element elave etme
	//int* appendIndexofArr(int* arr, int* size, int index, int num) {
	//	int* newArr = new int[*size + 1];
	//	for (size_t i = 0; i <= *size; i++) {
	//		if (i == index) {
	//			newArr[i] = num;
	//		}
	//		else if (i < index) {
	//			newArr[i] = arr[i];
	//		}
	//		else {
	//			newArr[i] = arr[i-1];
	//		}
	//	}
	//	(*size)++;
	//	delete[] arr;
	//	return newArr;
	//}
	//task7 indekse gore element silme

	/*int* deleteArrIndex(int* arr, int* size, int index) {
		int*newArr = new int[*size - 1];
		for (size_t i = 0; i < *size; i++)
		{
			if (i < index) {
				newArr[i] =arr[i] ;
			}
			else  
				newArr[i-1] = arr[i];
		}
		(*size)--;
		delete[] arr;
		arr = nullptr;
		return newArr;
	}*/
	//task8 
	/*int *appendBlockEl(int* arr, int* size, int* arr2, int size2) {
		int* newArr = new int[*size + size2];
		for (size_t i = 0; i < *size; i++)
		{
			newArr[i] = arr[i];
		}
		int j = 0;
		for (size_t i = *size; i < *size + size2; i++)
		{
			newArr[i] = arr2[j];
			j++;
		}

		(*size) +=3;
		delete[] arr;
		arr = nullptr;
		return newArr;
	}*/
	//task9 
	/*int *appendBlockEl(int* arr, int* size, int* arr2, int size2,int index) {
	int* newArr = new int[*size + size2];
	for (size_t i = 0; i < *size+ size2; i++)
	{
		int k = 0;
		 if (i == index) {
			while (k < 3) {
				newArr[i+k] = arr2[k];
				k++;
			}
		 }
		 else if (i < index) {
			 newArr[i] = arr[i];
		 }
		 else {
			 newArr[i + 2] = arr[i-1];
		 }
	}
	(*size) +=3;
	delete[] arr;
	arr = nullptr;
	return newArr;
}*/
	//int *deleteBlock(int* arr, int* size, int* arr2, int size2) {
	//	/*arr =  [size] {13, 4, 2, 1, 6, 7};
	//	 arr2 = [size2] {1, 4, 6};
	//	 */
	//	int say = 0;
	//	int n = 0;
	//	int* newArr = new int[*size - size2];
	//	for (size_t i = 0; i <*size; i++)
	//	{
	//		say = 0;
	//		for (size_t k= 0; k < size2; k++)
	//		{
	//			if (arr[i]!= arr2[k]) { 
	//				say++;
	//				if (say == 3) {
	//					newArr[n] = arr[i];
	//					n++;
	//				}
	//			}
	//		}
	//	}
	//	(*size) -=3;
	//	delete[] arr;
	//	arr = nullptr;
	//	return newArr;
	//}
	void main() {
		int size = 6;
		int size2 = 3;
		int* arr = new int [size] {13,4,2,5,8,7};
		int* arr2 = new int[size2] {1,4,6};
		//fillArr(arr, size);
		printArr(arr, size);
		cout << endl;
		arr = appendBlockEl(arr, &size, arr2, size2, 3);
		//arr = deleteArrIndex(arr, &size,2);
		//arr = deleteBlock(arr, &size, arr2, size2);
		printArr(arr, size);
	}
