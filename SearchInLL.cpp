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

// Iterative Search
//  int search(Node *head, int key)
//  {
//      int pos = 1;
//      Node *curr = head;
//      while (curr != NULL)
//      {
//          if (curr->data == key)
//          {
//              return pos;
//          }
//          else
//          {
//              pos++;
//              curr = curr->next;
//          }
//      }
//      return -1;
//  }

// Recursive Search
int search(Node *head, int key)
{
    if (head == NULL)
    {
        return -1;
    }
    if (head->data == key)
    {
        return 1;
    }
    else
    {
        int res = search(head->next, key);
        if (res == -1)
        {
            return -1;
        }
        else
        {
            return res + 1;
        }
    }
}

int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1;
    temp1->next = temp2;
    cout << search(head, 20);
    return 0;
}