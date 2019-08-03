#include<bits/stdc++.h>
using namespace std;


struct Node{
	int data;
	Node *next;
}


Node *head=nullptr;


Node *getNode(int num){

	Node *temp=new Node;
	temp->data=num;
	temp->next=nullptr;

	return temp;
}


void createlist(int size){

	for(int i=0;i<size;i++){
		int num;
		cout<<"Enter the number you want to insert in node: ";
		cin>>num;

		if(!head){
			head=getNode(num);
		}

		else{
			Node *temp=head;
			while(temp->next){
				temp=temp->next;
			}
			temp->next=getNode(num);
		}


	}

}

void printlist(){

	Node *temp=head;

	while(temp){
		cout<<temp->data<<" ";
		temp=temp->next;
	}

}


void insertionsort(){

	Node *toinsert=head;

	//the element to be inserted is actually next of toinsert;

	
	while(toinsert->next){

		Node *tocheck=head;
		if(toinsert->next->data<head->data){

			Node *temp=toinsert->next;
			toinsert->next=toinsert->next->next;
			temp->next=head;
			head=temp;

			toinsert=toinsert->next;
		}
		else{
			Node *tocheck=head;

			while(toinsert->next->data>tocheck->next->data){
				tocheck=tocheck->next;
			}

			Node *tempcheck=tocheck->next;


			Node *tempinsert=toinsert->next;

			toinsert->next=tempinsert->next->next;

			tempinsert->next=tempcheck;
			tocheck->next=tempinsert;


			toinsert=toinsert->next;

		}
		
	}
	




}