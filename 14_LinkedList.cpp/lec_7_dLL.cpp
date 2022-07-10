//insertion at any position
#include<iostream>
using namespace std;

class Node
{
public:
  int data;
  Node* next;
  Node* prev;
  //initial node
  Node(int data)
  {
    this -> data = data;
    this -> next = NULL;
    this -> prev = NULL;
  }
};

//insertion in reverse order
void insertAtHead(Node* &head , int data)
{
  Node* temp = new Node(data);
  head -> prev = temp;
  temp -> next = head;
  head = temp;
}

//insertion in order
void insertAtTail(Node* &tail , int data)
{
  Node* temp = new Node(data);
  tail -> next = temp;
  temp -> prev = tail;
  tail = temp;
}

//insertion at middle or at any position
void insertAtMiddle(Node* &tail , Node* &head , int position , int data)
{
  //to insert at first position
  if(position == 1)
  {
    insertAtHead(head , data);
    return ;
  }

  Node* temp = head;
  Node* temp1 = NULL;
  int count = 1;
  while(count < position)
  {
    temp1 = temp;
    temp = temp -> next;
    count++;
  }
  //insert at tail
  if(temp1 -> next == NULL)
  {
    insertAtTail(tail , data);
    return ;
  }

  Node* newNode = new Node(data);
  newNode -> next = temp;
  temp -> prev = newNode;
  temp1 -> next = newNode;
  newNode -> prev = temp1;
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
  cout << endl;
}

//finding length
void getLength(Node* &head)
{
  Node* temp = head;
  int len = 0;
  while(temp != NULL)
  {
    temp = temp -> next;
    len++;
  }
  cout << "Length is -> " << len << endl;
}

int main()
{
  //first node creation
  Node* node = new Node(100);
  Node* head = node;
  Node* tail = node;
  insertAtTail(tail , 20);
  insertAtTail(tail , 50);
  insertAtTail(tail , 33);
  insertAtTail(tail , 55);
  insertAtMiddle(tail , head , 3 , 5);
  insertAtMiddle(tail , head , 1 , 12);
  insertAtMiddle(tail , head , 6 , 10);
  insertAtMiddle(tail , head , 8 , 35);
  insertAtMiddle(tail , head , 10 , 45);
  print(head);
  getLength(head);
}
