#include <bits/stdc++.h>
using namespace std;

void counting(int n)
{
    // base case
    if (n == 0)
    {
        return;
    }
    // recursive relation
    counting(n - 1);

    cout << n << " ";
    // counting(n - 1);
}

int main()
{
    int n;
    cin >> n;

    cout << endl;
    counting(n);
}