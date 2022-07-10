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

//insertion at middle
void insertAtMiddle(Node* &tail , Node* &head , int position , int data)
{
  //to insert at first position
  if(position == 1)
  {
    insertAtNode(head , data);
    return ;
  }

  Node* temp = head;
  int count = 1;
  while(count < position - 1)
  {
    temp = temp -> next;
    count++;
  }
  if(temp -> next == NULL)
  {
    insertAtTail(tail , data);
    return ;
  }
  Node* newNode = new Node(data);
  newNode -> next = temp -> next;
  temp -> next = newNode;
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
  insertAtMiddle(tail , head , 1 , 1);
  insertAtMiddle(tail , head , 6 , 1);
  insertAtMiddle(tail , head , 7 , 1);
  insertAtMiddle(tail , head , 3 , 1);
  insertAtMiddle(tail , head , 8 , 1);
  print(head);
}
