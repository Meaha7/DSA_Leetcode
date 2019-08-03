#include<bits/stdc++.h>
using namespace std;



void enqueue(stack<int> &stack1, stack<int> &stack2, bool* leftright,int num){
	if(*leftright){
		stack1.push(num);
	}
	else{
		stack2.push(num);
	}
}

void dequeue(stack<int> &stack1, stack<int> &stack2, bool* leftright){

	if(*leftright){
		while(stack1.size()!=0){
			int temptop=stack1.top();
			stack2.push(temptop);
			stack1.pop();
		}

		stack2.pop();
	}

	else{
		while(stack2.size()!=0){
			int temptop=stack2.top();
			stack1.push(temptop);
			stack2.pop();
		}

		stack1.pop();
	}

	*leftright=!(*leftright);
}

void peek(stack<int> &stack1, stack<int> &stack2, bool* leftright){

	stack<int> temp;


	if(*leftright){

		while(stack1.size()!=1){
			int temptop=stack1.top();
			temp.push(temptop);
			stack1.pop();
		}

		if(stack1.size()>=1) cout<<"The top is: "<<stack1.top()<<endl;
		else cout<<"Queue is Empty :("<<endl;

		while(temp.size()!=0){
			int temptop=temp.top();
			stack1.push(temptop);
			temp.pop();
		}
	}
	else{

		while(stack2.size()!=1){
			int temptop=stack2.top();
			temp.push(temptop);
			stack2.pop();
		}

		if(stack2.size()>=1) cout<<"The top is: "<<stack2.top()<<endl;
		else cout<<"Queue is Empty :("<<endl;
		
		while(temp.size()!=0){
			int temptop=temp.top();
			stack2.push(temptop);
			temp.pop();
		}
	}

}



int main(){

	stack<int> stack1,stack2;

	bool leftright=true;
	int option;

	bool* lrptr=&leftright;

	while(1){
		cout<<endl<<"Enter 1 to enqueue an element, 2 to dequeue, 3 to see top element, 4 to break: "<<endl;
		cin>>option;
		
		if(option==1) {
			int num;
			cout<<"Enter the element you want to enqueue: ";
			cin>>num;
			enqueue(stack1,stack2,lrptr,num);
		}
		else if(option==2) dequeue(stack1,stack2,lrptr);
		else if(option==3) peek(stack1,stack2,lrptr);
		else if(option==4) break;
	}

	return 0;	
}