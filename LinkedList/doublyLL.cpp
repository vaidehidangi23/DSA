#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;

//constructor
    Node(int data){
        this -> data=data;
        this -> prev=NULL;
        this->next=NULL;
    }
    
};

void insertAttail(Node* &tail,int d){
    //new node
    Node* temp=new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail= temp;
}
void insertAthead(Node* &head, int d){
    //created new node
    Node* temp=new Node(d);
    temp -> next= head;
    head->prev = temp;
    head=temp;
}

void print(Node* &head){
    Node* temp=head;
    while(temp != NULL){
        cout<< temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertAtposition(Node* &tail,Node* &head,int position,int d){
    if(position==1){
        insertAthead(head,d);
        return;
    }
    Node* temp=head;
    int count=1;
   
    while(count<position-1){
        temp=temp->next;
        count++;
    }

//inserting at Last Position
    if(temp -> next == NULL) {
        insertAttail(tail,d);
        return ;
    }


    //creating a node for d
    Node* nodeToinsert=new Node(d);
    nodeToinsert->next = temp->next;
    temp->next->prev=nodeToinsert;
    
    temp->next=nodeToinsert;
    nodeToinsert->prev=temp;

}
void deleteNode(int position,Node* &head){
    //deleting first or start node
    if(position==1){
        Node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        //head->prev=NULL;
        //memory free 
        temp->next=NULL;
        temp->prev=NULL;
        delete temp;
    }
    else{
        //deleting middle node
        Node* curr=head;
        Node* prev=NULL;
        int count=1;
        while(count<position){
            prev=curr;
            curr=curr->next;
            count++;
        }
        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}



int main(){
    //created a new node
        Node* node1 =new Node(10);
        
        // cout<<node1 -> data<<endl;
        // cout<<node1 -> next<<endl;
        
   //head pointed to node1
   Node* head = node1;
   Node* tail = node1;
   
   print(head);

    insertAthead(head,12);
     print(head);
  insertAttail(tail,15);
   print(head);
   insertAtposition(tail,head,1,13);
   print(head);

deleteNode(4,head);
print(head);




      
    return 0;
}
