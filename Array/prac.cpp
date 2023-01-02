#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sum = 0;
    for (int i = 0; i <= 9; i++)
    {
        int temp = sum;
        sum += i;
        cout << i << " + " << temp << " = " << sum << endl;
    }
    cout << sum << endl;
}