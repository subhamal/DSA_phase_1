#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[4] = {5, 6, 8, 9};

    // print addrss through array
    cout << arr << endl;
    cout << &arr[0] << endl;

    // print value through array
    cout << arr[0] << endl;
    // print value through pointer
    cout << *arr << endl;
    // play with pointer and increase the value by pointer
    cout << *arr + 1 << endl;
    // increase the index
    cout << *(arr + 1) << endl;
    // calaki++
    int i = 2;
    cout << i[arr] << endl;
}