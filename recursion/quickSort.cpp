#include <bits/stdc++.h>
using namespace std;

int partition(int *arr, int s, int e)
{
    int pivot = s;
    int cnt = 0;

    // count the less values of than pivot
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[pivot] > arr[i])
        {
            cnt++;
        }
    }

    // swap with its right place
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);

    // left and right wala part smbhal lete h
    int i = s, j = e;

    while (i < pivotIndex && j > pivotIndex)
    {

        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

void quickSort(int *arr, int s, int e)
{
    // base case
    if (s >= e)
        return;

    // partition

    int p = partition(arr, s, e);

    // recursion
    quickSort(arr, s, p - 1);
    quickSort(arr, p + 1, e);
}

int main()
{
    int arr[15] = {3, 7, 0, 1, 5, 8, 3, 2, 34, 66, 87, 23, 12, 12, 12};
    int n = 15;

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}