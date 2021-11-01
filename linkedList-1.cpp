#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    // Node(int x, Node* next):data(x), next(next){};
    // Node():data(NULL), next(nullptr){};
};

void printList(Node* head){
    while(head != NULL){
        cout<<head->data<<"->";
        head = head->next;
    };
    // cout<<head->data<<"->";
    cout<<"null"<<endl;
}


int main(){
    Node* a = new Node();
    Node* b = new Node();
    Node* c = new Node();
    Node* d = new Node();
    a->data = 10;
    a->next = b;

    b->data = 7;
    b->next = c;

    c->data = 15;
    c->next = d;

    d->data = 9;
    d->next = nullptr;
    
    printList(a);
    


}