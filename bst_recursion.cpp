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

	Node *getNode(int val){
		Node *temp=new Node;
		temp->data=val;
		temp->left=nullptr;
		temp->right=nullptr;
		return temp;
	}

	Node* insert(Node *node,int key){

		if(!node){
			node=getNode(key);
			return node;
		}

		else if(key>node->data){
			node->right=insert(node->right,key);
		}
		else if(key<=node->data){
			node->left=insert(node->left,key);
		}
		return node;
	}

	

	void inorder(Node *node){
		if(!node) return;
		inorder(node->left);
		cout<<node->data<<" ";
		inorder(node->right);
	}

	void print(){
		inorder(this->root);
	}

	void createBST(int size){
		int value=0;
		for(int i=0;i<size;i++){
			cin>>value;
			this->root=insert(this->root,value);
		}
	}
};



int main(){
	BST t;
	t.createBST(7);
	t.print();
	return 0;
}