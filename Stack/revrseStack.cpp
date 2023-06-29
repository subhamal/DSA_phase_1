#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Subha";

    stack<char> s;

    for (int i = 0; i < str.length(); i++)
    {
        char temp = str[i];
        s.push(temp);
    }
    string ans = " ";
    for (int i = 0; i < str.length(); i++)
    {
        char temp = s.top();
        ans.push_back(temp);
        s.pop();
    }

    cout << ans << endl;
}