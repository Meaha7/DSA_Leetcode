#include<bits/stdc++.h>
using namespace std;


class BST{
private:
	struct Node{

		int data;;
		Node *left,*right;
	};

	Node *root;

public:
	BST(){
		root=nullptr;
	}

	Node *getNode(int val){
		Node *temp=new Node;
		temp->data=val;
		temp->left=nullptr;
		temp->right=nullptr;
		return temp;
	}

	void createBST(int size){

		int val=0;

		for(int i=0;i<size;i++){
			cout<<"Enter the value of node: "<<endl;
			cin>>val;

			if(!this->root){
				this->root=getNode(val);
				cout<<"Inserted!!"<<endl;
			}
			else{
				Node *temp=this->root;

				while(1){
					if(val<=temp->data){
						if(temp->left) temp=temp->left;
						else{
							temp->left=getNode(val);
							break;
						}
					}

					else{
						if(temp->right) temp=temp->right;
						else{
							temp->right=getNode(val);
							break;
						}
					}
				}
			}
		}
	}

	void print(){
		inorder(this->root);
	}

	void inorder(Node *node){
		if(!node) return;

		inorder(node->left);
		cout<<node->data<<" ";
		inorder(node->right);
	}

};


int main(){

	BST t1;
	t1.createBST(7);
	t1.print();

	return 0;
}