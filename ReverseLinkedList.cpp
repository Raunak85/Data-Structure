#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        next = NULL;
    }
};

void InsertionInLinkedList(Node* &head,int data){
    Node* newNode=new Node(data);
    if(head == NULL){
        // cout<<"healo";
        head = newNode;
        return;
    }
    
    Node* temp=head;
    while (temp->next != NULL)
    {  
        temp = temp->next;
    }
    // cout<<"after while in insert";
    temp->next=newNode;
}

Node* ReverseLinkedList(Node* &head){
    Node* prevPtr = NULL;
    Node* currPtr = head;
    Node* nextPtr;

    while (currPtr != NULL)
    {
        nextPtr = currPtr->next;
        currPtr->next = prevPtr;

        prevPtr = currPtr;
        currPtr = nextPtr;
    }
    return prevPtr;
    

}
void Deletion(Node* &head,int data){
    Node* temp=head;
    
    Node* ptr;
    Node* ptr1 = head;
    while (ptr1->data != data)
    {
        ptr = ptr1;
        ptr1=ptr1->next;
    }
    ptr->next = ptr1->next;
    

    
}

void display(Node* head){
    while (head != NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
    
}


int main(){
    Node* head=NULL;
    InsertionInLinkedList(head,1);
    InsertionInLinkedList(head,2);
    InsertionInLinkedList(head,3);
    InsertionInLinkedList(head,4);
    cout<<"Before Reverse"<<endl;
    display(head);
    Deletion(head,2);
    cout<<"After Deleting value 2"<<endl;
    display(head);
    cout<<"\nafter Reverse"<<endl;
    Node* newNode = ReverseLinkedList(head);
    display(newNode);
   

}