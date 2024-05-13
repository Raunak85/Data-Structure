#include <iostream>
using namespace std;
const int Max_Size = 1000;
class Stack
{

    int stack[Max_Size];
    int temp = -1;

public:
    bool isEmpty()
    {
        if (temp == -1)
        {

            return true;
        }
        return false;
    }

    bool isFull(){
        if(temp == Max_Size){
            return true;
        }
        return false;
    }

    void push(int data)
    {
        if(isFull()){
            cout<<"Stack is OverFlow, PUSH Operation Cann't be perform !"<<endl;
        }
        stack[++temp] = data;
    }
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty, So POP operation Cann't be Perform !" << endl;
            return;
        }
        int *tempData = &stack[temp];
        temp--;
        delete tempData;
    }
    void display()
    {
        for (int i = 0; i <=temp; i++)
        {
            cout << stack[i]<<" ";
        }
    }
};

int main()
{
    int data;
    // cout << "Enter an Element to push in Stack" << endl;
    // cin >> data;
    Stack s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    // s1.push(5);
    s1.pop();
    s1.display();
}