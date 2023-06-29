#include <bits/stdc++.h>
using namespace std;

// made a node with the data and pointer
class Node
{
public:
    int data;
    Node *next;
    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    // distructor
    ~Node()
    {
        int value = this->data;

        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with " << value << endl;
    }
};

// insert value at head
void insertAthead(Node *&head, int d)
{
    // creat a new Node
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

// insert value at tail
void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

// insert at position
void insertAtPosition(Node *&tail, Node *&head, int position, int d)
{ // insert at start
    if (position == 1)
    {
        insertAthead(head, d);
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
        insertAtTail(tail, d);
        return;
    }

    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

// delete a Node
void deleteNode(Node *&head, int position)
{
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
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
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void reverse(Node *&head, Node *curr, Node *prev)
{
    // base case
    if (curr == NULL)
    {
        head = prev;
        return;
    }
    Node *forward = curr->next;
    reverse(head, forward, prev);
    curr->next = prev;
}

Node *reverseLinkedlist(Node *head)
{
    Node *curr = head;
    Node *prev = NULL;
    reverse(head, curr, prev);
    return head;
}

// print the linked list
void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "--> ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    // creat new node through object
    Node *node1 = new Node(5);
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    // point head to node1
    Node *head = node1;
    Node *tail = node1;

    print(head);
    insertAthead(head, 12);
    insertAthead(head, 15);
    print(head);
    insertAtTail(tail, 7);
    insertAtTail(tail, 6);
    print(head);
    insertAtPosition(tail, head, 3, 8);
    print(head);
    insertAtPosition(tail, head, 1, 16);
    insertAtPosition(tail, head, 8, 2);
    print(head);
    deleteNode(head, 1);
    print(head);
    deleteNode(head, 4);
    print(head);
    reverseLinkedlist(head);
    print(head);
}