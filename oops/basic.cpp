#include <bits/stdc++.h>
using namespace std;
/* for acess the class which is in another folder
#include "hero.cpp"*/
class Hero
{

    // lets use public class
private:
    int v = 11;

public:
    int h = 10;

    // we use get & set for access the value of pivate properties out of the class
    int getval()
    {
        return v;
    }

    void setval(int v1)
    {
        v = v1;
    }
};
int main()
{
    // static alloction
    Hero h1;
    // dinamically
    Hero *b = new Hero;
    cout << " v valur :- " << b->getval() << endl;

    // cout << "Size:- " << sizeof(h1) << endl;
    // // for access h value
    // cout << "h value :- " << h1.h << endl;
    // cout << " v valur :- " << h1.getval() << endl;
    // h1.setval(6);
    // cout << " v valur :- " << h1.getval() << endl;
}