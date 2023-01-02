#include <bits/stdc++.h>
using namespace std;

int powerOfTwo(int n)
{
    // base case
    if (n == 0)
        return 1;

    // recursive relation
    return 2 * powerOfTwo(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << powerOfTwo(n) << endl;
}