#include<iostream>
using namespace std;

class BST{
public:
    struct Node{
        int data;
        Node *left;
        Node *right;
    };

    Node *root;

    BST(){
        root=nullptr;
    }

    Node* createNode(int n){
        Node *temp=new Node;
        temp->data=n;
        temp->left=nullptr;
        temp->right=nullptr;
        return temp;
    }

    void insertNode(Node *node, int num){
        if(node==nullptr){
            node=createNode(num);
        }
        else if(num<=node->data){
            cout<<"Going to the left"<<endl;
            insertNode(node->left,num);
        }
        else if(num>node->data){
            cout<<"Going to the right"<<endl;
            insertNode(node->right,num);
        }
    }

    void createTree(int n){
        for(int i=0;i<n;i++){
            int num;
            cout<<"Enter the value of node: ";
            cin>>num;
            if(!this->root) cout<<"Root does not exist!";
            insertNode(this->root,num);
            if(!this->root) cout<<"Not Inserted at root!";
        }
    }

    void inOrder(Node *node){
        if(!node) return;
        inOrder(node->left);
        cout<<node->data<<" ";
        inOrder(node->right);
    }

};


int main(){

    BST t1;
    t1.createTree(7);
    t1.inOrder(t1.root);

    return 0;
}
