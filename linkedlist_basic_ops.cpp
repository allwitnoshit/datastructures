#include <iostream>
using namespace std ;
class node
{
	public : 
	int data ;
	node* next ;
};
node* head ;
void insert(int x)
{
	node* temp1 ;
	node* temp2 = new node() ;
	temp1 = head ;
	temp2->data = x ;
	temp2->next = NULL ;
	while(temp1->next!=NULL)
	{
	   	temp1 = temp1->next ;
	}
	temp1->next = temp2 ;	
}
void specifyinsert(int x,int n)
{
	int i ;
	node*temp1 = new node() ;
	temp1->data = x ;
	if(n==1)
	{
		temp1->next = head ;
		head = temp1 ;
		return ;
	}
	node* temp2 ;
	temp2 = head ;
	for(i=1;i<n-1;i++)
	{
		temp2 = temp2->next ;						
	}
	temp1->next = temp2->next ;
	temp2->next = temp1 ;
}
void deletion(int n)
{
	int i ;
	node* temp = head ;
	node* temp2 ;
	for(i=1;i<n-1;i++)
	{
		temp = temp->next ;
	}
	temp2 = temp->next ;
	temp->next = temp2->next ;
	delete temp2 ;
}
void print()
{
	node* temp ;
	temp = head ;
	cout << "The List is : " << endl ;
	while(temp!=NULL)
	{
		cout << temp->data << endl ;
		temp=temp->next ;
	}		
} 	
int main()
{
	head = new node() ;
	head->data = 2 ;
	head->next = NULL ;
	insert(3) ;
	insert(4) ;
	insert(10) ;
	print() ;
	specifyinsert(7,1);
	specifyinsert(6,2) ;
	print() ;
	deletion(2) ;
	deletion(3) ;
	print () ;	
}
