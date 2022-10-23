#include <bits/stdc++.h>
using namespace std;

bool isPalindrom(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        if (name[s] != name[e])
        {
            return false;
        }
        s++;
        e--;
    }
    return true;
}

char lowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

void reverse(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
}

int getLength(char name[])
{
    int count = 0;

    for (int i = 0; name[i] != '\0'; i++)

    {
        count++;
    }
    return count;
}

int main()
{
    char name[20];
    cin >> name;
    cout << "Enter your name:- " << endl;

    cout << "Your Name is " << name << endl;
    cout << " Charecter Length is:- " << getLength(name) << endl;
    int len = getLength(name);
    reverse(name, len);
    cout << "Your reverse name is " << name << endl;
    cout << "Is charecter palindrom :- " << isPalindrom(name, len) << endl;
    cout << "the letter in small" << lowerCase('B');
}