//find the unique number in an array
#include<bits\stdc++.h>
using namespace std;
class Node{
  public:
  int val;
  Node* next;
  Node(int a){
    val=a;
    next=NULL;
  }
};
void insert(Node* &head,int val){
  Node* new_node=new Node(val);
  new_node->next=head;
  head=new_node;
}
void inserttail(Node* &head,int val){
  Node* noya=new Node(val);
  Node* temp=head;
  while(temp->next!=NULL){
    temp=temp->next;
  }
  temp->next=noya;
}
void display(Node* head){
  Node* temp=head;
  while(temp!=NULL){
    cout<<temp->val<<" ";
    temp=temp->next;

  }
  cout<<endl;
}

int main(){
  Node* head=NULL;
  insert(head,6);
  //display(head);
  insert(head,9);
  //display(head);
  insert(head,0);
  //display(head);
  insert(head,11);
  display(head);
  inserttail(head,87);
  display(head);
  inserttail(head,8);
  display(head);
  inserttail(head,97);
  display(head);
  inserttail(head,867);
  display(head);

}
 