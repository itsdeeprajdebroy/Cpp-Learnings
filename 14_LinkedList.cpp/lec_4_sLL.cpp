//delete LL
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

  ~Node()
  {
    if(this -> next != NULL)
    {
      delete next;
      this -> next = NULL;
    }
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

//insertion at middle or at any position
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

//delete LL
void deleteAt(Node* &tail , Node* &head , int position)
{
  if(position == 1)
  {
      Node* temp = head;
      head = temp -> next;
      temp -> next = NULL;
      delete temp;//destructor call
      return;
  }
  Node* curr = head;
  Node* prev = NULL;
  int count = 1;
  while(count < position)
  {
    prev = curr;
    curr = curr -> next;
    count++;
  }
  prev -> next = curr -> next;
  //to handle last node
  if(curr -> next == NULL)
  {
    tail = prev;
    delete curr;
    return;
  }
  curr -> next = NULL;
  delete curr;
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
  insertAtMiddle(tail , head , 2 , 12);
  insertAtMiddle(tail , head , 3 , 13);
  insertAtMiddle(tail , head , 4 , 14);
  insertAtMiddle(tail , head , 5 , 15);
  insertAtMiddle(tail , head , 6 , 16);
  deleteAt(tail , head , 6);
  cout << tail -> data << endl;
  print(head);
}
