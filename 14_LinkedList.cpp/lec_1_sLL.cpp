#include<iostream>
using namespace std;

class Node
{
public:
  int data;
  Node* next;

  Node(int data)
  {
    this -> data = data;
    this -> next = NULL;
  }
};

//function creation
void insertAtNode(Node* &head , int data)
{
  Node* temp = new Node(data);
  temp -> next = head;
  head = temp;
}

//printing LL
void print(Node* &head)
{
  Node* temp = head;
  while(temp != NULL)
  {
    cout << temp -> data << " ";
    temp = temp -> next;
  }
}

int main()
{
  Node* node = new Node(1000);
  Node* head = node;
  insertAtNode(head , 500);
  insertAtNode(head , 15);
  insertAtNode(head , 50);
  print(head);
}
