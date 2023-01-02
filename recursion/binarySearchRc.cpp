#include <bits/stdc++.h>
using namespace std;

void print(int *arr, int s, int e, int k)
{
    cout << " array start from " << s << " and end with " << e << " the key is " << k << endl;
    for (int i = s; i <= e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool isPresent(int *a, int s, int e, int k)
{
    print(a, s, e, k);
    if (s > e)
    {
        return false;
    }
    int mid = s + (e - s) / 2;

    if (a[mid] == k)
    {
        return true;
    }
    else if (a[mid] > k)
    {
        return isPresent(a, s, mid - 1, k);
    }
    else
    {
        return isPresent(a, mid + 1, e, k);
    }
}

int main()
{
    int arr[6] = {2, 4, 6, 7, 9, 10};
    int k = 10;

    bool ans = isPresent(arr, 0, 5, k);
    if (ans)
    {
        cout << "present" << endl;
    }
    else
    {
        cout << "absent" << endl;
    }
}