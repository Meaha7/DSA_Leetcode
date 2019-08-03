#include<bits/stdc++.h>

using namespace std;


class Heap{

private:
	struct Node{
	int data;
	Node *left,*right,*parent;
	};

	Node *top;
	
public:


	Heap(){
		top=nullptr;
	}
	
	Node *getnode(int n, Node* par=nullptr){
		Node *temp=new Node;
		temp->data=n;
		temp->left=nullptr;
		temp->right=nullptr;
		if(par) temp->parent=par;
		else temp->parent=nullptr;

		return temp;
	
	}

	void Heapify(Node *newnode){
		
		Node *node=newnode;

		while(node->parent && node->data<node->parent->data){

			int temp=node->data;
			node->data=node->parent->data;
			node->parent->data=temp=temp;
			node=node->parent;

		}

	}

	void insert(int n){

		Node *temp=getnode(int n);
		if(!top) {
			Node *temp=getnode(int n);
			top=temp;
		}
		

		else{
			queue<Node*> q;
			q.push(top);
			char c;
			while(q.size()!=0){
				if(q.front()->left) q.push(q.front()->left);
				else{
					c='l';
					break;
				}
				if(q.front()->right) q.push(q.front()->right);
				else{
					c='r';
					break;
				}
				q.pop();
			}

			if(c=='l') {
				q.front()->left=getnode(n,q.front());
				Heapify(q.front()->left);
			}
	   		else if(c=='r') {
				q.front()->right=getnode(n,q.front());
				Heapify(q.front()->right);
			}

		}
	}

	
	
	



};
