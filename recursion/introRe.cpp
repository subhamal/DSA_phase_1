#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    // base case
    if (n == 0)
        return 1;

    // int smallProb = factorial(n - 1);
    // int bigProb = n * smallProb;
    return n * factorial(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << factorial(n) << endl;
}