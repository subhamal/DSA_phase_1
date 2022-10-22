#include <bits/stdc++.h>
using namespace std;
void alterNet(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if ((i + 1) < size)
        {
            swap(arr[i], arr[i + 1]);
        }
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
    int arr[6] = {1, 2, 3, 4, 5, 6};
    printArray(arr, 6);
    alterNet(arr, 6);
    printArray(arr, 6);
}