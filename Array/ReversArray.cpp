#include <bits/stdc++.h>
using namespace std;
void reversArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    cout << "Reversing the array" << endl;
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
    int arr[6] = {6, 5, 4, 3, 2, 1};
    printArray(arr, 6);
    reversArray(arr, 6);
    printArray(arr, 6);
}