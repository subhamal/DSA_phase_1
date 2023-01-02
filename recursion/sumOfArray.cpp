#include <bits/stdc++.h>
using namespace std;

int sumOf(int *arr, int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return arr[0];
    }
    int ans = arr[0] + sumOf(arr + 1, n - 1);
    return ans;
}

int main()
{
    int a[5] = {3, 2, 5, 1, 6};
    int size = 5;

    int ans = sumOf(a, size);
    cout << ans << endl;
}