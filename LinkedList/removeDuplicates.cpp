/************************************************************

    Following is the linked list node structure.
    
    class Node 
    {
        public:
        int data;
        Node* next;

        Node(int data) 
        {
            this->data = data;
            this->next = NULL;
        }
    };
    
************************************************************/
//FROM SORTED LIST
Node * uniqueSortedList(Node * head) {
    // Write your code here.
    if(head==NULL){
        return NULL;
    }

    Node* curr= head;
    while(curr != NULL && curr->next != NULL){
        if(curr->data == curr->next->data){
            Node* next_next=curr->next->next;
            //Node* nodeToDelete=curr->next;
            delete(curr->next);
            curr->next=next_next;

        }else{
            curr=curr->next;
        }

    }  
    return head;
}



//FROM UNSORTED LIST


Node *removeDuplicates(Node *head)
{
    // Write your code here

       if(head==NULL){
            return head;
        }

        unordered_map<int, bool> visited;

        Node* temp=head;
        Node* prev=head;

        while(temp!=NULL){
            if(visited[temp->data]==true){
                 
                 Node* nodeToDelete=temp;
                 prev->next=temp->next;
                 temp=temp->next;
                 nodeToDelete->next=NULL;
                 delete(nodeToDelete);
                 

            } else {
                prev=temp;
              visited[temp->data] = true;
              temp = temp->next;
            }
        }
        return head;



    //O(n^2);//TLE
    // Node* curr=head;
    

    // while(curr!=NULL && curr->next!=NULL){
    //     Node* temp=curr->next;
    //     while(temp!=NULL && temp->next!=NULL){
    //       if (curr->data == temp->data) {

    //        Node* next=temp->next;
    //         Node* nodeToDelete=temp;
    //         delete(nodeToDelete);
    //         temp=next;

    //     }else{
    //         temp=temp->next;
    //     }

    //     }
    // }
    // return head;
}


