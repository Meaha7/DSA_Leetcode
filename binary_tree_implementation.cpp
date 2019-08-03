#include<bits/stdc++.h>
using namespace std;


class Tree{

private:
	struct Node{
		int data;
		Node *left, *right;
	};

	Node *root;

public: 
	Tree(){
		root=nullptr;
	}

	Node* getnode(int n){
		Node *temp=new Node;
		temp->data=n;
		temp->left=nullptr;
		temp->right=nullptr;
		return temp;
	}

	void createtree(int size){
		int counter=0;
		int num;

		char leftright;


		for(counter=0;counter<size;counter++){

			Node *temp=root;
			cout<<"Enter the value at node: ";
			cin>>num;

			if(!root){
				root=getnode(num);
				cout<<"Inserted at root node pos"<<endl;
			}

			else{
				while(1){
					cout<<"Do you want to go to left or right of "<<temp->data<<": ";
					cin>>leftright;


					if(leftright=='l'){
						if(temp->left) temp=temp->left;
						else {
							temp->left=getnode(num);
							break;
						}
					}

					else if(leftright=='r'){
						if(temp->right) temp=temp->right;
						else {
							temp->right=getnode(num);
							break;
						}
					}

					else{
						cout<<"Please enter l or r"<<endl;
					}
				}

			}
		}
	}

	void callorder(Node *node){
		if(!node) return;
		callorder(node->left);
		cout<<node->data<<" ";
		callorder(node->right);
	}

	void inorder(){
		Node* temp=this->root;
		//cout<<"Starting from: "<<temp->data<<endl;
		callorder(temp);
	}

	void deletetree(){
		deleteall(this->root);
	}

	void deleteall(Node *node){
		if(!node) return;
		deleteall(node->left);
		deleteall(node->right);
		delete(node);
	}

};




int main(){
	
	Tree t1;
	t1.createtree(2);
	t1.inorder();
	t1.deletetree();

return 0;

}