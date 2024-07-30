#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        next = nullptr;
    }
};

void Insert(Node* &head,int data){
    Node* newNode=new Node(data);
    if(head == nullptr){
        head = newNode;
        newNode->next = head;
        return;
    }

    Node* temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = head;

}

void display(Node* head){
    Node* temp = head;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp != head);
    cout<<endl;
}

int main(){
    Node* head = nullptr;
    Insert(head,1);
    Insert(head,2);
    Insert(head,3);
    Insert(head,4);
    display(head);

}