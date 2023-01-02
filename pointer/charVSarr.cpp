#include <bits/stdc++.h>
using namespace std;

int main()
{

    // we declear a integer array and a character array and major diff is char takes a extra size
    int arr[5] = {1, 2, 3, 4, 5};
    char ch[6] = "abcde";

    // arr print the first index address but the char print the whole content
    cout << arr << endl;
    cout << ch << endl;

    // here a single declear charecter pointer print the whole value of the char array
    char *c = &ch[0];
    cout << c << endl;
}