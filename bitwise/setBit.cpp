#include <bits/stdc++.h>
using namespace std;

void setBit()
{
    int a, b;
    cin >> a >> b;
    int count = 0;
    while (a != 0)
    {
        int bit = a & 1;
        if (bit == 1)
        {
            count++;
        }
        a = a >> 1;
    }
    while (b != 0)
    {
        int bit = b & 1;
        if (bit == 1)
        {
            count++;
        }
        b = b >> 1;
    }
    cout << " The set bit count is :- " << count << endl;
}

int main()
{
    setBit();
}