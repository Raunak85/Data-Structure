#include<iostream>
using namespace std;

class Node{
    public:

    int data;
    Node* next;
    
    Node(int data){
        this->data=data;
        next=NULL;
    }
};

// insertion At Tail

void InsetAtLast(Node* &head,int data){
    Node* newNode=new Node(data);
    if(head == NULL){
        head = newNode;
        return;
    }

    Node* temp=head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next=newNode; 
}

        // Insertion At Head
void InsertAtHead(Node* &head,int data){
    Node* newNode=new Node(data);
    
    newNode->next = head;
    head = newNode;

}

        //InsertionAtBetween
void InsertAtBetween(Node* &head,int data){
    Node* newNode=new Node(data);
    Node* temp =head;
    Node* p=temp;
    while(temp != NULL){
        if(temp->data == 4){
            break;
        }
        p = temp;
        temp = temp->next;
    }
    newNode->next = p->next;
    p->next=newNode;
}

        // Searching 

void SearchInLinkedList(Node* &head,int data){
    int count=0;
    Node* temp=head;
    bool flag=false;
    while(temp != NULL){
        count++;
        if(temp->data == data){
            flag = true;
            break;
        }
        temp = temp->next;
    }
    if(flag){
        cout<<data<<" is present at "<<count<<" index in LinkedList"<<endl;
    }
    else{
        cout<<data<<" is not present in LinkedList"<<endl;
    }
}

void display(Node* head){
    Node* temp=head;
    cout<<"LinkedList element are :"<<endl;
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    Node* head=NULL;

        // Insert At Last

    InsetAtLast(head,1);
    InsetAtLast(head,2);
    InsetAtLast(head,4);

        // Insert At Head

    // InsertAtHead(head,1);
    // InsertAtHead(head,2);
    // InsertAtHead(head,4);
    // InsertAtHead(head,5);

        // InsertionAtBetween
    InsertAtBetween(head,3);
    SearchInLinkedList(head,5);

    display(head);

}