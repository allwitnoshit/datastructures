#include <iostream>
using namespace std;
class node{
public:
  int data;
  node* next;
  node* prev;
};
class linked{
public:
  node* head;
  linked()
  {
    head = NULL;
  }
  void insertAtHead(int a)
  {
    node* temp =  new node();
    temp->data=a;
    if(head==NULL)
    {
      temp->next=NULL;
      head=temp;
      return;
    }
    temp->next=head;
    head=temp;
  }
  void insertAtTail(int a)
  {
    node* temp1 = head;
    node* temp = new node();
    temp->data=a;
    temp->next=NULL;
    if(head==NULL)
    {
      head=temp;
      return;
    }
    while(temp1->next!=NULL)
    {
      temp1=temp1->next;
    }
    temp1->next=temp;
  }
  void print()
  {
    node* temp1 = head;
    while(temp1!=NULL)
    {
      cout <<temp1->data<< '\n';
      temp1=temp1->next;
    }
  }
};
int main()
{
  linked obj;
  obj.insertAtHead(2);
  obj.insertAtHead(3);
  obj.insertAtTail(4);
  obj.insertAtTail(3);
  obj.print();
}
