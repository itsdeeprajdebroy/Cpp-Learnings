#include<iostream>
using namespace std;

class Node
{
public:
  int data;
  Node* next;
  //initial node
  Node(int data)
  {
    this -> data = data;
    this -> next = NULL;
  }
};

//insertion in order
void insertAtTail(Node* &tail , int data)
{
  Node* temp = new Node(data);
  tail -> next = temp;
  tail = temp;
}

//insertion in reverse order
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
  //first node creation
  Node* node = new Node(1000);
  Node* head = node;
  Node* tail = node;
  //remaining node creation
  insertAtTail(tail , 500);
  insertAtTail(tail , 15);
  insertAtTail(tail , 50);
  print(head);
}
