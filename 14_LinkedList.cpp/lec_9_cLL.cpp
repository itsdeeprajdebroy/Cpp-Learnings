//circular linked list --> using sLL
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

//insertion in Circular linked List
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

//Delete Circular Linked List
void deleteAt(Node* &tail , int element)
{
  Node* curr = tail;
  Node* prevs = NULL;
  //traversal of Linked List
  while(curr -> data != element)
  {
    prevs = curr;
    curr = curr -> next;
  }

  //Delete at any position
  prevs -> next = curr -> next;
  curr -> next = NULL;
  delete curr;
}

//Printing Linked List
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
  //Function call
  insertAtNode(tail , 100 , 20);
  insertAtNode(tail , 20 , 15);
  insertAtNode(tail , 15 , 25);
  insertAtNode(tail , 25 , 35);
  insertAtNode(tail , 15 , 35);
  deleteAt(tail , 15);
  deleteAt(tail , 25);
  //Printing Linked List
  print(tail);
}
