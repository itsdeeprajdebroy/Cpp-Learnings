//circular linked list
#include<iostream>
using namespace std;

class Node
{
public:
  int data;
  Node* next;
  //initial node creation
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

//insertion in reverse order
void insertAtNode(Node* &tail , int element , int data)
{
  Node* curr = tail;
  while(curr -> data != element)
  {
    curr = curr -> next;
  }
  Node* temp = new Node(data);
  temp -> next = curr -> next;
  curr -> next = temp;
}

//delete LL
void deleteAt(Node* &tail , int element)
{
  Node* curr = tail;
  Node* prevs = NULL;
  //traversal
  while(curr -> data != element)
  {
    prevs = curr;
    curr = curr -> next;
  }

  //deleteAt any position
  prevs -> next = curr -> next;
  curr -> next = NULL;
  delete curr;
}

//printing LL
void print(Node* &tail)
{
  Node* temp = tail -> next;
  cout << tail -> data << " ";
  while(temp != tail)
  {
    cout << temp -> data << " ";
    temp = temp -> next;
  }
}


int main()
{
  //first node creation
  Node* node = new Node(100);
  Node* tail = node;
  insertAtNode(tail , 100 , 20);
  insertAtNode(tail , 20 , 15);
  insertAtNode(tail , 15 , 25);
  insertAtNode(tail , 25 , 35);
  insertAtNode(tail , 15 , 35);
  deleteAt(tail , 15);
  deleteAt(tail , 25);
  // insertAtTail(tail , 20);
  // insertAtTail(tail , 50);
  // insertAtTail(tail , 33);
  // insertAtTail(tail , 55);
  // insertAtMiddle(tail , head , 3 , 5);
  // insertAtMiddle(tail , head , 1 , 12);
  // insertAtMiddle(tail , head , 6 , 10);
  // insertAtMiddle(tail , head , 8 , 35);
  // insertAtMiddle(tail , head , 10 , 45);
  // deleteAt(tail , head , 1);
  // deleteAt(tail , head , 6);
  // insertAtMiddle(tail , head , 1 , 45);
  print(tail);
  // getLength(head);
}
