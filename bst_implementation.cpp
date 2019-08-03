#include<bits/stdc++.h>
using namespace std;


class BST{


private:
	struct Node{
		int data;
		Node *left,*right;
	};


	Node *root;

public:

	BST(){
		root=nullptr;
	}

	Node *getNode(int num){
		Node *temp=new Node;
		temp->data=num;
		temp->left=nullptr;
		temp->right=nullptr;

		return temp;
	}

	void createBST(int size){

		for(int i=0;i<size;i++){
			int val;
			cout<<"Enter the value of node!: ";
			cin>>val;

			if(!root){
				root=getNode(val);
			}

			else{
				Node *temp=root;

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

	void inorder(Node *node){
		if(!node) return;
		inorder(node->left);
		cout<<node->data;
		inorder(node->right);
	}

	void print(){
		inorder(this->root);
	}


};



int main(){

	BST t1;
	t1.createBST(7);
	t1.print();

	return 0;
}