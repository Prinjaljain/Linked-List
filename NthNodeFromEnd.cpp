#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
// Using length of Linked List
// void NNodeEnd(Node *head, int Nth)
// {
//     int count = 0;
//     for (Node *curr = head; curr != NULL; curr = curr->next)
//     {
//         count++;
//     }
//     if (count<Nth)
//     {
//         cout<<"Don't have Nth node.";
//     }
//     Node*curr=head;
//     for (int i = 1; i <= Nth; i++)
//     {
//         curr = curr->next;
//     }
//     cout<< curr->data;
// }

// Using two pointer
void NNodeEnd(Node *head, int Nth)
{
    if (head == NULL)
    {
        return;
    }
    Node *first = head;
    for (int i = 0; i < Nth; i++)
    {
        if(first==NULL){return;}
        first = first->next;
    }
    Node*second=head;
    while(first!=NULL){
        second=second->next;
        first=first->next;
    }
    cout<<second->data;
}

int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    Node *temp3 = new Node(40);
    head->next = temp1;
    temp1->next = temp2;
    temp2->next = temp3;
    NNodeEnd(head, 2);
    return 0;
}