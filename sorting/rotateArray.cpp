#include <bits/stdc++.h>
using namespace std;

void rotate(int nums[], int size, int k)
{

    vector<int> temp(size);

    for (int i = 0; i < size; i++)
    {
        temp[(i + k) % size] = nums[i];
    }
    for (int i = 0; i < size; i++)
    {
        nums[i] = temp[i];
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
    rotate(arr, 6, 2);
    printArray(arr, 6);
}