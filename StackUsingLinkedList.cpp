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

class Stack{
    public:
    Node* top = nullptr;
    Node* head = nullptr;

    void push(int data){
        Node* newNode=new Node(data);
        if(newNode == nullptr){
            cout<<"Memory allocation failed !"<<endl;
            return;
        }
        if(head == nullptr){
            head = newNode;
            top = head;
            return;
        }
        newNode->next = head;
        head = newNode;
        top = head;
    }
    void peek(){
        if(head == nullptr){
            cout<<"Stack is empty"<<endl;;
            return;
        }
        cout<<top->data<<" ";
    }
    void pop(){
        if(head == nullptr || top == nullptr){
            cout<<"Stack is empty"<<endl;
            return;
        }
        Node* temp = top;
        head = head->next;
        top = head;
        delete temp;
    }
};


int main(){
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.peek();
    st.pop();
    st.pop();
    st.pop();
    st.peek();
}