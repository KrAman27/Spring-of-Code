#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node* next;
public:
    node(int n)
    {
        this->data = n;
        this->next = NULL;
    }
};

void insertAtTail(node* &head,int d)
{
    if(head==NULL)
    {
        node* nn = new node(d);
        head = nn;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    node* n=new node(d);
    n->next=NULL;
    temp->next=n;

}

node* rearrange(node* head){
    node* evens = NULL;
    node* event = NULL;
    node* odds = NULL;
    node* oddt = NULL;
    node* curr = head;

    if(head==NULL) return NULL;

    while(curr){
        if(curr->data & 1 ){
            if(odds == NULL){
                odds = oddt = curr;
            }
            else{
                oddt->next = curr;
                oddt = oddt->next;
            }
        }
        else{
            if(evens==NULL){
                evens = event = curr;
            }
            else{
                event->next = curr;
                event = event->next;
            }
        }
        curr = curr->next;
    }

    if(odds!=NULL){
        head = odds;
        oddt->next = evens;
    }
    else{
        head = evens;
    }

    if(event!=NULL){
        event->next = NULL;
    }
    return head;
}

void print(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"-->>";
        temp=temp->next;
    }
}


int main()
{
    node* head=NULL;
    insertAtTail(head,17);
    insertAtTail(head,15);
    insertAtTail(head,8);
    insertAtTail(head,12);
    insertAtTail(head,10);
    insertAtTail(head,5);
    insertAtTail(head,4);
    insertAtTail(head,1);
    insertAtTail(head,7);
    insertAtTail(head,6);
    insertAtTail(head,11);


    print(rearrange(head));

    return 0;
}
