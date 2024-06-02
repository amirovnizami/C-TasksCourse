#include<iostream>
using namespace std;
using namespace std;


//Insertion Sort
//void insertionSort(int arr[], int n)
//{
//    int i, key, j;
//    for (i = 1; i < n; i++) {
//        key = arr[i];
//        j = i - 1;
//
//        while (j >= 0 && arr[j] > key) {
//            arr[j + 1] = arr[j];
//            j = j - 1;
//        }
//        arr[j + 1] = key;
//    }
//}
//void printArray(int arr[], int n)
//{
//    int i;
//    for (i = 0; i < n; i++)
//        cout << arr[i] << " ";
//    cout << endl;
//}
//int main()
//{
//    int arr[] = { 12, 11, 13, 5, 6 };
//    int N = sizeof(arr) / sizeof(arr[0]);
//
//    insertionSort(arr, N);
//    printArray(arr, N);
//
//    return 0;
//}

//Bubble Sort

// Optimized implementation of Bubble sort

void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (swapped == false)
            break;
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << " " << arr[i];
}


int main()
{
    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
    int N = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, N);
    cout << "Sorted array: \n";
    printArray(arr, N);
    return 0;
}

