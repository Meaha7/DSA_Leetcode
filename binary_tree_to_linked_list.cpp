#include<bits/stdc++.h>
using namespace std;

class Tree{

private:
	struct Node{
		int data;
		Node* left,*right;
	};

	struct Treenode{
		int data;
		Treenode *lchild,*rchild;
	};

	Node *head;
	Treenode *root;

public:
	Tree(){
		head=nullptr;
		root=nullptr;
	}

	Node* getNode(int val){

		Node *temp=new Node;
		temp->data=val;
		temp->left=nullptr;
		temp->right=nullptr;

		return temp;
	}

	Treenode* getTreenode(int val){
		
		Treenode *temp=new Treenode;
		temp->data=val;
		temp->lchild=nullptr;
		temp->rchild=nullptr;

		return temp;
	}

	void createTree(int size){

		int num;
		

		for(int i=0;i<size;i++){
			
			cout<<"Enter the value of node: ";
		    cin>>num;

			if(!root) root=getTreenode(num);
			
			else{

				Treenode* temp=root;
				char leftright;

				while(1){
					cout<<"Enter l/r to insert left/right of "<<temp->data<<": ";
					cin>>leftright;

					if(leftright=='l'){
						if(temp->lchild) temp=temp->lchild;
						
						else{
							temp->lchild=getTreenode(num);
							cout<<"Inserted!";
							break;
						}
					}

					if(leftright=='r'){
						if(temp->rchild) temp=temp->rchild;
						
						else{
							temp->rchild=getTreenode(num);
							cout<<"Inserted!";
							break;
						}
					}

				}
			}
		}

	}

	void createlist(int size){

		int num;
		for(int i=0;i<size;i++){

			cout<<"Enter the value you want to put in node: ";
			cin>>num;

			if(!head){
				head=getNode(num);
			}

			else{
				Node* temp=head;
				Node* toinsert=getNode(num);

				while(temp->right){
					temp=temp->right;
				}
				temp->right=toinsert;
				toinsert->left=temp;
			}
		}

	}

	void print(){
		treetolinkedlist(this->root);

		/*while(temp2->left){
			temp2=temp2->left;
		}

		while(temp2){
			cout<<temp2->data<<" ";
			temp2=temp2->right;
		}*/

		Node *temp=head;

		while(temp){
			cout<<temp->data<<" ";
			temp=temp->right;
		}

	}

	/*Node* treetolinkedlist(Treenode *tnode, Node* node){

		if(!tnode) return nullptr;

		Node* temp=new Node;

		temp->left=treetolinkedlist(tnode->lchild,temp);
		temp->data=tnode->data;

		if(temp->left) {
			temp->left->right=temp;
		}

		temp->right=treetolinkedlist(tnode->rchild,temp);
		if(temp->right) {
			temp->right->left=temp;
			temp=temp->right;
		}
		//temp=temp->right;
		return temp;
	}*/


	void treetolinkedlist(Treenode *tnode){

		if(!tnode) return;

		treetolinkedlist(tnode->lchild);
		if(!head){
			this->head=new Node;
			this->head->data=tnode->data;

		}
		else{
			Node *temp=this->head;
			while(temp->right){
				temp=temp->right;
			}

			temp->right=new Node;
			temp->right->data=tnode->data;
			temp->right->left=temp;
		}

		treetolinkedlist(tnode->rchild);

	}


};


int main(){

	Tree t1;
	t1.createTree(7);
	t1.print();

	return 0;
}