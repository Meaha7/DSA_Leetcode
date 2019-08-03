#include<bits/stdc++.h>
using namespace std;

class Tree{

private:
	struct Node{
		int data;
		Node *lchild;
		Node *rchild;
	};

	Node *root;

public:
	Tree(){
		root=nullptr;
	}

	Node* getNode(int val){

		Node *temp=new Node;
		temp->data=val;
		temp->lchild=nullptr;
		temp->rchild=nullptr;

		return temp;
	}


	void createTree(int size){

		for(int i=0;i<size;i++){
			int num;;
			cout<<"Enter the value of node: ";
			cin>>num;

			if(!root){
				root=getNode(num);
				cout<<" Inserted at root position!"<<endl;
			}

			else{
				Node *temp=root;
				char lr;
				while(1){
					cout<<"Enter l/r if you want to left/right of "<<temp->data;
					cin>>lr;
					if(lr=='l'){
						if(temp->lchild) temp=temp->lchild;
						else{
							temp->lchild=getNode(num);
							cout<<"Inserted"<<endl;
							break;
						}
					}

					else if(lr=='r'){
						if(temp->rchild) temp=temp->rchild;
						else{
							temp->rchild=getNode(num);
							cout<<"Inserted";
							break;
						}
					}
				}
			}

		}
	}


	void inorder(Node *node){
		if(!node) return;
		inorder(node->lchild);
		cout<<node->data<<" ";
		inorder(node->rchild);
	}

	void print(){
		inorder(this->root);
	}




};


int main(){


	Tree t1;
	t1.createTree(7);
	t1.print();

	return 0;



}