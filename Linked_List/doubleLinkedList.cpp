#include <bits/stdc++.h>
using namespace std;
// node class
class Node
{
public:
    int data;
    Node *prvs;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->prvs = NULL;
        this->next = NULL;
    }

    ~Node()
    {
        int val = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with " << val << endl;
    }
};
// insert At head
void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head->prvs = temp;
    head = temp;
}
// insert at tail
void insertAttail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    temp->prvs = tail;
    tail = temp;
}
// print Linke list
void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "-->";
        temp = temp->next;
    }
    cout << endl;
}
// geting linked list length
int getLenth(Node *head)
{
    int len = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

// insert at any position
void insertAtPosition(Node *&tail, Node *&head, int position, int d)
{ // insert at start
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }
    Node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }
    // insert at last
    if (temp->next == NULL)
    {
        insertAttail(tail, d);
        return;
    }

    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prvs = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prvs = temp;
}

// delete a Node
void deleteNode(Node *&head, int position)
{
    if (position == 1)
    {
        Node *temp = head;
        temp->next->prvs = NULL;
        head = temp->next;
        temp->next = NULL;

        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *prev = NULL;
        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        curr->prvs = NULL;
        prev->next = curr->next;
        curr->next = NULL;

        delete curr;
    }
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    print(head);
    insertAtHead(head, 9);
    insertAttail(tail, 11);
    insertAtPosition(tail, head, 3, 15);
    print(head);
    cout << getLenth(head) << endl;
    deleteNode(head, 4);
    print(head);
}