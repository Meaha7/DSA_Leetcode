#include<bits/stdc++.h>
using namespace std;


class BST{
private:
	struct Node{
		int data;
		Node *left, *right;
	};

	Node *root;

public:
	BST(){
		root=nullptr;
	}

	Node* getNode(int num){

		Node *temp=new Node;
		temp->data=num;
		temp->left=nullptr;
		temp->right=nullptr;

		return temp;
	}

	void createbst(int size){

		int num;

		for(int i=0;i<size;i++){
			cout<<"Enter the num to be inserted: ";
			cin>>num;

			if(!root){
				root=getNode(num);
				cout<<endl<<"Inserted at root node!"<<endl;
			}
			else{
				Node *temp=root;
				while(1){
					if(num<=temp->data){
						if(temp->left) temp=temp->left;
						else{
							temp->left=getNode(num);
							break;
						}
					} 
					else{
						if(temp->right) temp=temp->right;
						else{
							temp->right=getNode(num);
							break;
						}
					}
				}
			}
		}

	}

	void inorder(){
		print(this->root);
	}

	void print(Node *node){
		if(!node) return;;

		print(node->left);
		cout<<node->data<<" ";
		print(node->right);
	}


};


int main(){

	BST b1;
	b1.createbst(7);
	b1.inorder();

	return 0;
}