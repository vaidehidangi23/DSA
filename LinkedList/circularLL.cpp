#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

//constructor
    Node(int data){
        this -> data=data;
        this->next=NULL;
    }
    
};


void print(Node* &tail){
    Node* temp=tail;
    if(tail==NULL){
       cout<<"list is empty"<<endl;
       return;
    }
    do{
        cout<< tail->data<<" ";
        tail=tail->next;
    }while(tail != temp);
    cout<<endl;
}
void insertNode(Node* &tail,int element,int d){
    //empty list
    if(tail==NULL){
        Node* newNode=new Node(d);
        tail=newNode;
        newNode->next=newNode;
    }
    else{
        //non empty list
        Node *curr =tail;
        while(curr->data != element){
          curr=curr->next;  
        }
        //elmnt found, curr is representing element
        Node* temp= new Node(d);
        temp->next=curr->next;
        curr->next=temp;  
    }

}

void deleteNode(Node* &tail, int value){
    //empty list
    if(tail==NULL){
        cout<<"empty list";
        return;
    }
    else{
        Node* prev =tail;
        Node* curr =prev->next;

        while(curr->data != value){
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;

        //1node LL
        if(curr==prev){
            tail==NULL;
        }
        //>=2 node LL
        if(tail==curr){
            tail=prev;
        }
        curr->next=NULL;
        delete curr;
    }
}


int main(){
    //created a new node
    Node* tail=NULL;
    insertNode(tail,2,8);
    print(tail);
     
    insertNode(tail,8,5);
    print(tail);
    insertNode(tail,5,3);
    print(tail);
    
   deleteNode(tail,3);
    print(tail);
deleteNode(tail,8);
     print(tail);

    

      
    return 0;
}
