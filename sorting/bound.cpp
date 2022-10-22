#include <bits/stdc++.h>
using namespace std;
int firstOccurence(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + ((end - start) / 2);
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }

        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + ((end - start) / 2);
    }
    return ans;
}
int lastOccurence(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + ((end - start) / 2);
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }

        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + ((end - start) / 2);
    }
    return ans;
}

int main()
{
    int arr[6] = {2, 5, 3, 3, 3, 9};

    cout << "the first occurence is :- index " << firstOccurence(arr, 6, 3) << endl;
    cout << "the last occurence is :- index " << lastOccurence(arr, 6, 3) << endl;
}