#include <bits/stdc++.h>
using namespace std;
void print(int *pt)
{
    cout << *pt << endl;
    cout << pt << endl;
}
void update(int *ptr)
{
    *ptr = *ptr + 1;
}

int getSum(int *ar, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + *(ar + i);
    }

    return sum;
}

int main()
{
    /* int a = 5;
     int *p = &a;

     print(p);

     cout << "before--> " << *p << endl;
     update(p);

     cout << "after--> " << *p << endl;

     */
    int arr[5] = {1, 2, 3, 4, 5};

    cout << getSum(arr, 5) << endl;
}