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

void print(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"-->>";
        temp=temp->next;
    }
}

void reverse(node* &head)
{
    node* current = head;
    node *prev = NULL, *next = NULL;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}

int main()
{
    node* head=NULL;
    insertAtTail(head,7);
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,1);

    print(head);

    reverse(head);
    cout<<endl<<"The reverse of the list is : "<<endl;
    print(head);

}
