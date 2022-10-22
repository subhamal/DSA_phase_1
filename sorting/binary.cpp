#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + ((end - start) / 2);
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + ((end - start) / 2);
    }
    return -1;
}

int main()
{
    int arr[6] = {2, 5, 3, 6, 7, 9};

    int result = binarySearch(arr, 6, 6);
    if (result > -1)
    {
        cout << "The number is found in index : " << result << endl;
    }
    else
    {
        cout << "The number is not found: " << endl;
    }
}