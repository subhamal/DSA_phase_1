#include <bits/stdc++.h>
using namespace std;

int main()
{
    // creat sack through STL
    stack<int> s;

    // push operation
    s.push(5);
    s.push(2);
    s.push(3);
    cout << " Top element of Stack is :- " << s.top() << endl;
    // pop operation
    s.pop();

    cout << " Top element of Stack is :- " << s.top() << endl;
    s.pop();
    s.pop();

    if (s.empty())
    {
        cout << "Stack is Empty" << endl;
    }
    else
    {
        cout << "Stack is not empty" << endl;
    }
}