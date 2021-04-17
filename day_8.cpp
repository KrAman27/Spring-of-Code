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

void print_alternative(node* head1,node* head2){
    if(!head1){
        node* temp2 = head2;
        while(temp2){
            cout<<temp2->data<<"->";
        }
        return ;
    }

    if(!head2){
        node* temp1 = head1;
        while(temp1){
            cout<<temp1->data<<"->";
        }
        return ;
    }

node* temp1 = head1;
node* temp2 = head2;

while(temp1 && temp2){
    cout<<temp1->data<<"->"<<temp2->data<<"->";
    temp1 = temp1->next;
    temp2 = temp2->next;
}

while(temp1){
    cout<<temp1->data<<"->";
    temp1 = temp1->next;
}

while(temp2){
    cout<<temp2->data<<"->";
    temp2 = temp2->next;
}

}

int main()
{
    node* head1=NULL;
    insertAtTail(head1,5);
    insertAtTail(head1,7);
    insertAtTail(head1,17);
    insertAtTail(head1,13);
    insertAtTail(head1,11);

    node* head2=NULL;
    insertAtTail(head2,12);
    insertAtTail(head2,10);
    insertAtTail(head2,2);
    insertAtTail(head2,4);
    insertAtTail(head2,6);

    print_alternative(head1,head2);

    return 0;
}
