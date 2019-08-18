#include<iostream>
using namespace std;

class Stack{
    struct Node{
        int data;
        Node *next;
    };
public:
    Node* top;
    int Size;

    Stack(){
        top=nullptr;
        Size=0;

    }
    Node *createNode(int n){
        Node *temp=new Node;
        temp->data=n;
        temp->next=nullptr;
        return temp;
    }

    void push(int n){
        Node *temp=createNode(n);
        if(!top) {
                top=temp;
                Size++;
                }
        else{
            temp->next=top;
            top=temp;
            Size++;
        }
    }
    void pop(){
        if(Size==0){
            throw 1;
        }
        else{
            Node *temp=top;
            top=top->next;
            delete temp;
            Size--;
        }
    }
    int getTop(){
        if(top)return top->data;
        return -1;
    }
};

int main(){

    Stack s1;
    try{
    s1.push(5);
    s1.push(6);
    cout<<s1.getTop()<<endl;
    s1.pop();
    cout<<s1.getTop()<<endl;
    s1.pop();
    s1.pop();
    s1.pop();
    }
    catch(int e){
        cout<<"Stack Underflow"<<endl;
    }

    return 0;
}
