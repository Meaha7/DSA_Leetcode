#include<iostream>

using namespace std;


class Tree{

public:
    struct Node{
        int data;
        Node *left;
        Node *right;
    };

    Node *root;

    Tree(){
    root=nullptr;
    }

    Node* createnode(int n){
        Node *temp=new Node;
        temp->data=n;
        temp->left=nullptr;
        temp->right=nullptr;

        return temp;
    }

    void createTree(int numNodes){

        for(int i=0;i<numNodes;i++){
            int val;
            cout<<"Enter the data in node: ";
            cin>>val;
            Node *newNode=createnode(val);

            if(!root){
                /*root=new Node;
                root->data=val;
                root->left=nullptr;
                root->right=nullptr;*/
                root=newNode;
            }

            else{
                Node *temp=this->root;
                while(1){
                    char leftright;
                    cout<<"press l for going left, r for going right of: "<<temp->data<<endl;
                    cin>>leftright;
                    if(leftright=='l' || leftright=='L'){
                        if(temp->left) temp=temp->left;
                        else {
                            temp->left=newNode;
                            break;
                            }

                    }
                    else if(leftright=='r' || leftright=='R'){
                        if(temp->right) temp=temp->right;
                        else {
                            temp->right=newNode;
                            break;
                            }
                    }


                }
            }
        }


    }

    void inOrder(Node *root){

        if(!root) return;
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
    }



};

int main(){

    Tree T1;
    T1.createTree(7);
    T1.inOrder(T1.root);

}
