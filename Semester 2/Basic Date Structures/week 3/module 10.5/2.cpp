#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* next;
        Node* prev;
    
        Node(int val, Node* next = NULL, Node* prev = NULL)
        {
            this->val = val;
            this->next = next;
            this->prev = prev;
        }
};

void insert_tail(Node* &head, Node* &tail, int val)
{
    Node* node = new Node(val);

    if(tail == NULL)
    {
        head = node;
        tail = node;
        return;
    }

    tail->next = node;
    node->prev = tail;
    tail = tail->next;
}

void reverse(Node* head, Node* tail)
{
    Node* t_head = head;
    Node* t_tail = tail;

    while(t_head != t_tail && t_tail->next != t_head)
    {
        swap(t_head->val, t_tail->val);
        t_head = t_head->next;
        t_tail = t_tail->prev;
    }
}

void print(Node* head)
{
    Node* tmp = head;

    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int a;

    while(true)
    {
        cin >> a;
        if(a == -1) break;

        insert_tail(head, tail, a);
    }

    reverse(head, tail);
    print(head);
}