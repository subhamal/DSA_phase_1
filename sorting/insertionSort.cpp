#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{

    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (j; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[6] = {9, 4, 2, 5, 7, 6};
    printArray(arr, 6);
    insertionSort(arr, 6);
    printArray(arr, 6);
}