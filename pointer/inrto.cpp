#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 5;

    // declear the pointer
    int *p = &a;

    // cout the veriable value and address
    cout << a << endl;
    cout << &a << endl;

    // cout the variable value and address through pointer
    cout << *p << endl;
    cout << p << endl;
}