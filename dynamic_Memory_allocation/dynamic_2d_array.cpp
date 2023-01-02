#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // creating 2d array in dynamic way
    // here n is for row
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        // here n is for coloum
        arr[i] = new int[n];
    }

    // creating 2d array done

    // taking input
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;

    // output
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // relesing the memory
    for (int i = 0; i < n; i++)
    {
        // here n is for coloum
        delete[] arr[n];
    }
    // for row
    delete[] arr;
}