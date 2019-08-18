#include<iostream>
#define SIZE 26
using namespace std;

struct Node{
        int data;
        Node* next;
};

class Hash{

public:
    Node* arr[SIZE];

    //Constructor
    Hash(){
        for(int i=0;i<SIZE;i++){
            arr[i]=nullptr;
        }
    }
    //insert into Hash
    void insert(int n){

        int index=n%(SIZE);
            if(!arr[index]){

            arr[index]=new Node;
            arr[index]->data=n;
            arr[index]->next=nullptr;
            }

        else{
            Node *temp=arr[index];

            while(temp && temp->next){
                temp=temp->next;
            }
            temp->next=new Node;
            temp->next->data=n;
            temp->next->next=nullptr;
        }

    }

    //Search from hash
    bool search(int n){

        int index=n%SIZE;
        Node *temp=this->arr[index];

        while(temp){
            if(temp->data==n) return true;
            temp=temp->next;
        }
        return false;
    }

};

void find(bool n){
    if(n) cout<<"Element found!!"<<endl;
    else cout<<"Element not found!"<<endl;
}

int main(){
    Hash h1;
    h1.insert(25);
    h1.insert(51);

    find(h1.search(25));
    find(h1.search(24));

return 0;
}
