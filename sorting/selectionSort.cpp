#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minI = i;
        for (int j = i + 1; j < n; j++)
        {

            if (arr[j] < arr[minI])
                minI = j;
        }
        swap(arr[minI], arr[i]);
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
    int arr[6] = {1, 4, 2, 5, 7, 0};
    printArray(arr, 6);
    selectionSort(arr, 6);
    printArray(arr, 6);
}