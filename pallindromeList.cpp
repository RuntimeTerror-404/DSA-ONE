#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x) : data(x), next(nullptr){};
};

Node *middle(Node *head)
{
    Node *slow = head;
    Node *fast = slow;
    while (fast != NULL || fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
};

Node *reverse(Node *head)
{
    Node *curr = head;
    Node *prev = NULL;
    while (curr != NULL)
    {
        Node *temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}

bool pallindrome(Node *head)
{
    Node *first = head;
    Node *mid = middle(head);
    Node *last = reverse(mid->next);
    while (last != NULL)
    {
        if (first->data != last->data)
        {
            return false;
        }
        first = first->next;
        last = last->next;
    }
    return true;
};

int main()
{
    Node *a = new Node(23);
    Node *b = new Node(100);
    Node *c = new Node(31);
    Node *d = new Node(67);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = nullptr;
    // 23->100->31->67->NULL
    bool res = pallindrome(a);
    cout << res;
}