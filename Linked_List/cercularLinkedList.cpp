#include <bits/stdc++.h>
using namespace std;
class Node
{
    int data;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL
    }

    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with " << value << endl;
    }
};

int main()
{
}