#include<iostream>
using namespace std;

class Tree{
private:
    struct TreeNode(){
        int data;
        TreeNode *left,*right;
    };
    struct Node(
        int data;
        Node *prev,*next;
    }
public:
    TreeNode *root;
    Node *head

    Tree(){
        root=nullptr;
        head=nullptr;
    }

    TreeNode* gettreenode(int n){
        TreeNode *temp=new TreeNode;
        temp->data-=n;
        temp->left=nullptr;
        temp->right=nullptr;
    }

    Node* getlinkednode(int n){
        Node *temp=new Node;
        temp->data=n;
        temp->left=nullptr;
        temp->right=nullptr;
    }

    void createTree(int size){
        if(size==0) return;
        int num=0;

        cout<<"Enter the value at root node: ";
        cin>>num;
        root=getreenode(num);
        TreeNode *temproot=root;

    for(int i=1;i<size;i++){
            char leftright;
            cin>>leftright;
            cout<<"Enter the num you want to insert: ";
            cin>>num;

            while(1){

                cout<<"Enter l or r if you want to got to left or right of: "<<temproot->data;
                cin>>leftright;

                if(leftright=='l') {
                    if(!temproot->left){
                        temproot->left=gettreenode(num);
                        break;
                        }
                    else{
                        temproot=temproot->left;
                    }

                }
                else if(leftright=='r') {
                        if(!temproot->right){
                            temproot->right=getreenode(num);
                            break;
                        }
                        else{
                            temproot=temproot->right;
                        }
                }

            }


        }
    }

    void treetolinkedlist(TreeNode *node,Node *temp){

        if(!node) return;
        treetolinkedlist(node->left,temp);
        if(!head) {
            head=getlinkednode(node->data);


        }



    }


};






int main(){
    return 0;
}
