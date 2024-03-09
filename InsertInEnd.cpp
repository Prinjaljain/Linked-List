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
Node *insert_last (Node*head,int value){
    Node*temp=new Node(value);
    Node*curr=head;
    if(head==NULL){
        return temp;
    }
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=temp;
    return head;
}
void printList(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    cout << head->data << " ";
    printList(head->next);
}
int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1;
    temp1->next = temp2;
    insert_last(head, 40);
    printList(head);
    return 0;
}