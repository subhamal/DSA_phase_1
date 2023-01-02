#include <bits/stdc++.h>
using namespace std;
// pass by valu veriable or a copy veriable
void update(int n)
{
    n++;
}

// reference veriable
void update2(int &n)
{
    n++;
}

int main()
{
    int i = 5;
    int &j = i;
    cout << i << endl;
    i++;
    cout << i << endl;
    j++;
    cout << i << endl;
    update(i);

    cout << i << endl;
    update2(i);
    cout << i << endl;
}