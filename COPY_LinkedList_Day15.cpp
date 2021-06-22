#include <iostream>
#include <cstddef>
using namespace std;	
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
class Solution{
    public:

      Node* insert(Node *head,int data)
      {
          //Complete this method
          
          //Creating a Node and passing DATA as NodeConstructorArgument.
          Node* new_node = new Node(data);
          
          if(head)   //When the head is not NULL
          {
              Node* last = head; // Address of head,storing in last;
              while(last->next)   //Till,the head doesnot become NULL;
              {
                  last = last->next;
              }
              last->next = new_node;  //Inserting data at the end
              return head;         //returning the data from head everytime.   
          }
          return new_node; // When the head is NULL.
      }

      void display(Node *head)
      {
          Node *start=head;
          while(start)
          {
              cout<<start->data<<" ";
              start=start->next;
          }
      }
};
int main()
{
	Node* head=NULL;
  	Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
    }	
	mylist.display(head);
		
}