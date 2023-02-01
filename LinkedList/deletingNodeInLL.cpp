#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

//constructor
    Node(int data){
        this -> data=data;
        this -> next=NULL;
    }
   
};
void deleteNode(int position,Node* &head){
    //deleting first or start node
    if(position==1){
        Node* temp=head;
        head=head->next;
        //memory free 
        temp->next=NULL;
        delete temp;
    }
    else{
        //deleting middle node
        Node* curr=head;
        Node* prev=NULL;
        int count=1;
        while(count<=position){
            prev=curr;
            curr=curr->next;
            count++;
        }
        prev->next=curr->next;
        curr->next=NULL;
    }
}
void insertAttail(Node* &tail,int d){
    //new node
    Node* temp=new Node(d);
    tail->next=temp;
    tail= tail->next;
}
void insertAthead(Node* &head, int d){
    //created new node
    Node* temp=new Node(d);
    temp -> next= head;
    head = temp;
}

void print(Node* &head){
    Node* temp=head;
    while(temp != NULL){
        cout<< temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


int main(){
    //created a new node
        Node* node1 =new Node(10);
        
        
   //head pointed to node1
   Node* head = node1;
   Node* tail = node1;
   
   print(head);

   insertAthead(head,12);
    print(head);
 insertAttail(tail,15);
   print(head);


deleteNode(1,head);
print(head);



      
    return 0;
}

