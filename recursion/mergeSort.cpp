// #include <bits/stdc++.h>
// using namespace std;
// void merge(int *arr, int s, int e)
// {
//     cout << "hi"
//          << " ";
//     // first find the mid
//     int mid = s + (e - s) / 2;

//     // lets declerar right sid lenth
//     int len1 = mid - s + 1;
//     // lets declear left sid lenth
//     int len2 = e - mid;

//     // lets declear 2 arrays for copy
//     int *first = new int[len1];
//     int *second = new int[len2];
//     // declear main arry index
//     int k = s;

//     // copy the values
//     for (int i = 0; i < len1; i++)
//     {
//         first[i] = arr[k++];
//     }
//     k = mid + 1;
//     for (int i = 0; i < len2; i++)
//     {
//         second[i] = arr[k++];
//     }

//     // merge to sorted array
//     int index1 = 0;
//     int index2 = 0;
//     k = s;
//     while (index1 < len1 && index2 < len2)
//     {
//         if (first[index1] < second[index2])
//         {
//             arr[k++] = first[index1++];
//         }
//         else
//         {
//             arr[k++] = second[index2++];
//         }
//     }
//     while (index1 < len1)
//     {
//         arr[k++] = first[index1++];
//     }
//     while (index2 < len2)
//     {
//         arr[k++] = second[index2++];
//     }

//     delete[] first;
//     delete[] second;
// }

// void mergeSort(int *ar, int s, int e)
// {
//     // base case
//     if (s >= e)
//     {
//         return;
//     }
//     cout << "hi"
//          << " ";

//     int mid = s + (e - s) / 2;

//     // for left side
//     mergeSort(ar, s, mid);

//     // for right side
//     mergeSort(ar, mid + 1, e);

//     // after divide lets merge
//     merge(ar, s, e);
// }

// int main()
// {
//     int arr[5] = {2, 5, 3, 1, 6};
//     int n = 5;

//     mergeSort(arr, 0, n - 1);
//     for (int i; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

#include <iostream>
using namespace std;

void merge(int *arr, int s, int e)
{

    int mid = (s + e) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copy values
    int mainArrayIndex = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayIndex++];
    }

    // merge 2 sorted arrays
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainArrayIndex++] = first[index1++];
        }
        else
        {
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    while (index1 < len1)
    {
        arr[mainArrayIndex++] = first[index1++];
    }

    while (index2 < len2)
    {
        arr[mainArrayIndex++] = second[index2++];
    }

    delete[] first;
    delete[] second;
}

void mergeSort(int *arr, int s, int e)
{

    // base case
    if (s >= e)
    {
        return;
    }

    int mid = (s + e) / 2;

    // left part sort karna h
    mergeSort(arr, s, mid);

    // right part sort karna h
    mergeSort(arr, mid + 1, e);

    // merge
    merge(arr, s, e);
}

int main()
{

    int arr[15] = {3, 7, 0, 1, 5, 8, 3, 2, 34, 66, 87, 23, 12, 12, 12};
    int n = 15;

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}