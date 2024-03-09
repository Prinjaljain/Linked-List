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
Node *insert(Node *head, int value)
{
    Node *temp = new Node(value);
    temp->next=head;
    return temp;
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
    head=insert(head, 40);
    printList(head);
    return 0;
}