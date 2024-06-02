#include<iostream>
using namespace std;

void printArr(int* arr, int size) {
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] != 0) {
			cout << arr[i] << " ";
		}
	}
}
void printArrC(int* arr, int size) {
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] != -1) {
			cout << arr[i] << " ";
		}
	}
}

void fillArr(int*arr,int size) {
	cout << "Massivin elementlerini daxil et: ";
	for (size_t i = 0; i < size; i++)
	{
		cin >> arr[i];
		
	}
}
//task1
//int *deleteMinus(int* arr, int *size) {
//	int menfi = 0;
//	int newSize = 0;
//	int* newArr =  new int [*size - menfi] {};
//	for (size_t i = 0; i < *size; i++)
//	{
//		if (arr[i] > 0) {
//			newArr[newSize += i] = arr[i];
//			//(*size--);
//		}
//		else menfi++, i -1;
//	}
//	return newArr;
//}
//task2
//void fillArrC(int *A,int size_a,int *B,int size_b ) {
//	int newSize = size_a + size_b;
//	int* C = new int [size_a + size_b] {};
//	for (size_t i = 0; i < size_a; i++)
//	{
//		C[i] = A[i];
//	}
//	for (size_t j = 0; j < size_b; j++)
//	{
//		C[size_a + j] = B[j];
//	}
//	for (size_t k = 0; k < newSize; k++)
//	{
//		cout << C[k]<< " ";
//	}
//}
//task3
//int ortaqElement(int* A, int size_a, int* B, int size_b, int*&C) {
//	int maxSize = size_a;
//	C = new int[maxSize];
//	int size_c = 0;
//	for (size_t i = 0; i < size_a; i++)
//	{
//		for (size_t j = 0; j < size_b; j++)
//		{
//			if(A[i] == B[j]){
//				C[size_c] = A[i];
//				size_c++;
//			}
//		}
//	}
//	return size_c;
//}
//task4 A da olub B de olmayan elementler
//int not_in_B(int* arr1, int size1, int *arr2, int size2, int*&C) {
//	int eyni = 0;
//	int say = 0;
//	int size_c = 0;
//	int newSize = size1;
//	C = new int[newSize] {};
//	for (size_t i = 0; i < size1; i++)
//	{
//		say = 0;
//		for (size_t j = 0; j < size2; j++)
//		{
//			if (arr1[i] != arr2[j])
//			{
//				say++;
//				if (say == size2) {
//					C[size_c] = arr1[i];
//					size_c++;
//				}
//			}
//			else if (arr1[i] == arr2[j]) {
//				eyni++;
//			}
//		}
//	}
//	return size_c;
//}
//task5 Ortaq olmayan elementleri yaz

int  ortaqOlmayan(int* arr1, int size1, int* arr2, int size2, int* &C) {
	int maxSize = size1+ size2;
	C = new int[maxSize];
	int size_c = 0;
	int say = 0;
	//A massivini C ye birlesdirme
	for (size_t i = 0; i < size1; i++)
	{
		C[size_c] = arr1[i];
		size_c++;
	}
	//B massivini C ye birlesdirme
	for (size_t j = 0; j < size2; j++)
	{
		C[size_c] = arr2[j];
		size_c++;
	}

	for (int i = 0; i < size_c; i++)
	{
		say = 0;
		for (int j = size_c-1; j >= 0; j--)
		{
		// 	yoxlama-- eger tekrarlarlanan elementler varsa sayi artir
			if ( C[i] == C[j]) {
				say++;
			} 
		}
		if (say > 1) {
			int k = 0;
			k = C[i];
			C[i] = -1;
			for (size_t i = 0; i < size_c; i++)
			{
				//Eyni olanlari -1 nen isare eleyib oxuyanda if den istifade etmek
				if (C[i] == k) {
					C[i] = -1;
				}
			}
		}
		
	}
	return size_c;
}
//task6 Butun sade ededleri sil
//
//int deleteSimple(int* arr, int size,int* &C) {
//	int maxSize = size;
//	C = new int[maxSize];
//	int size_c = 0;
//	int count = 0;
//	int n = 1;
//	for (size_t i = 0; i < size; i++)
//	{
//		n = 1;
//		count = 0;
//		while (n <= arr[i]) {
//			if (arr[i] % n == 0) {
//				count++;
//			}
//			n++;
//
//		}
//		if (count > 2) {
//			C[size_c] = arr[i];
//			size_c++;
//		}
//	}
//	delete[] arr;
//	arr = nullptr;
//	return size_c;
//}


void main() {
	//int size = 5;
	//int* arr = new int[size] {1, 63, 4, -9, -2};
	//printArr(arr, size);
	//cout << endl;
	//arr = deleteMinus(arr, &size);
	//printArr(arr, size);

	int size_a = 5;
	int size_b = 6;
	int* A = new int[size_a] {};
	int* B = new int[size_b] {};
	int* C;
	int newSize;

	fillArr(A, size_a);
	fillArr(B, size_b);
	printArr(A, size_a);
	cout << endl;

	printArr(B, size_b);
	cout << endl;
	//newSize = ortaqElement(A, size_a, B, size_b, C);
	//newSize = not_in_B(A, size_a, B, size_b, C);
	//newSize = deleteSimple(A,size_a,C);
	newSize = ortaqOlmayan(A, size_a, B, size_b, C);


	printArrC(C, newSize);
	//fillArrC(A, size_a, B, size_b);
}