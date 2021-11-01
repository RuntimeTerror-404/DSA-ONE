#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int x):data(x), next(nullptr){};
};

void printList(Node* head){
    while(head != NULL){
        cout<<head->data<<"->";
        head = head->next;
    };
    // cout<<head->data<<"->";
    cout<<"null"<<endl;
}

void reverseList(Node* head){
    stack<Node*> s;
    while(head != NULL){
        s.push(head);
        head = head->next;
    }
    while(!s.empty()){
        Node* x = s.top();
        cout<<x->data<<"->";
        s.pop();
    }
    cout<<"null"<<endl;
}

Node* solution_1(Node* head){
    Node* curr = head;
    Node* prev = NULL;
    while(curr != NULL){
        Node* temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}


int main(){
    Node* a = new Node(23);
    Node* b = new Node(100);
    Node* c = new Node(31);
    Node* d = new Node(67);
    a->next = b; b->next = c; c->next = d; d->next = nullptr;
    // 23->100->31->67->null

    // reverseList(a);
    Node* head = solution_1(a);

    printList(head);
}