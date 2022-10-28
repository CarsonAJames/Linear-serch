#include <iostream>
#include <cstdlib>

using namespace std;

#include<iostream>
using namespace std;
void print(int arr[], int n)
{
    cout << n << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
void selectionSort(int arr[], int n)
{
    int i, j, min_in;
    for (i = 0; i < n; i++)
    {
        min_in = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_in])
                min_in = j;
        swap(arr[i], arr[min_in]);
    }
}
int main(int argv, char* argc[])
{
    int size;
    srand(time(0));
    cout << "Enter Size Of Array : ";
    cin >> size;
    int *arr = new int[size];
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 10;
    }
    int i, j, n, temp;
    //size = sizeof(arr) / sizeof(int);
    cout << "Unsorted Array :";
    print(arr, size);
    selectionSort(arr, size);
    cout << "Sorted Array :";
    print(arr, size);
    return(0);
}