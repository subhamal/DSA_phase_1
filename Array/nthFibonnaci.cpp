#include <bits/stdc++.h>
using namespace std;
void nthFibonacci()
{
    int n;
    cin >> n;
    int first = 0, sec = 1;
    int i = 2;
    int fibbo = 0;
    while (i < n)
    {
        fibbo = first + sec;
        first = sec;
        sec = fibbo;
        i++;
    }

    cout << "The nth term is :- " << fibbo << endl;
}

int main()
{
    nthFibonacci();
}