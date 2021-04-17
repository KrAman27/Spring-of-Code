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

void removeDuplicates(node* head)
{
    node* current = head;

    node* next_next;

    if (current == NULL)
    return;

    while (current->next != NULL)
    {
    if (current->data == current->next->data)
    {
        next_next = current->next->next;
        free(current->next);
        current->next = next_next;
    }
    else
    {
        current = current->next;
    }
    }
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
    insertAtTail(head,11);
    insertAtTail(head,11);
    insertAtTail(head,11);
    insertAtTail(head,21);
    insertAtTail(head,43);
    insertAtTail(head,43);
    insertAtTail(head,60);

    removeDuplicates(head);

    print(head);

    return 0;
}
