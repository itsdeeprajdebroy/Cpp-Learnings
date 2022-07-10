//insertion at head
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
  insertAtHead(head , 20);
  insertAtHead(head , 50);
  print(head);
  getLength(head);
}
