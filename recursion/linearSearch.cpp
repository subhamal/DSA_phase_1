#include <bits/stdc++.h>
using namespace std;

bool isKeyFind(int *a, int n, int k)
{
    // base case
    if (n == 0)
    {
        return false;
    }

    if (a[0] == k)
    {
        return true;
    }
    else
    {
        isKeyFind(a + 1, n - 1, k);
    }
}

int main()
{
    int arr[5] = {2, 5, 3, 1, 6};
    int s = 5;
    int key = 4;

    bool ans = isKeyFind(arr, s, key);
    if (ans)
        cout << "key is found!!" << endl;
    else
        cout << "key is not found!!" << endl;
}