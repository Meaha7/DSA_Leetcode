#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};

Node* getNode(int n){
    Node *temp=new Node;
    temp->data=n;
    temp->next=nullptr;
    return temp;
}


int main()
 {
    int numTest;
    cin>>numTest;
    
    while(numTest--){
        int v,edges;
        cin>>v>>edges;
        Node* arr[v];
        for(int i=0;i<v;i++){
            arr[i]=getNode(i);
        }
        
        int vertexa, vertexb;
        
        for(int i=0;i<edges;i++){
            cin>>vertexa>>vertexb;
            Node *tempa=arr[vertexa];
            Node *tempb=arr[vertexb];
            while(tempa->next) tempa=tempa->next;
            while(tempb->next) tempb=tempb->next;
            
            tempa->next=getNode(vertexb);
            tempb->next=getNode(vertexa);
        }
        
        for(int i=0;i<v;i++){
            Node *temp=arr[i];
            while(temp){
                cout<<temp->data;
                if(temp->next) cout<<"-> ";
                temp=temp->next;
            }
            cout<<endl;
        }
        cout<<endl;
    }
    
	return 0;
}