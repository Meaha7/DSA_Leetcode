#include<iostream>
#include<unordered_map>

using namespace std;

struct Node{
    int data;
    Node *next;
};

class LinkedList{
private:
    Node *head;
    Node *tail;
    int size;
public:
    LinkedList(){
    head=nullptr;
    tail=nullptr;
    size=0;
        }

    Node* createNode(int val){
        Node* temp=new Node;
        temp->data=val;
        temp->next=nullptr;

        return temp;
    }

    void createList(int size1){

        for(int i=0;i<size1;i++)
            {
            cout<<"The value of i is: "<<i<<" which is less than: "<<size1<<endl;
            int val;
            cout<<"Enter a value of Node: ";
            cin>>val;
            Node *temp=createNode(val);

            if(!this->head){
                this->head=temp;
                this->tail=temp;
                this->size++;
            }

            else{
                this->tail->next=temp;
                this->tail=this->tail->next;
                size++;
            }

        }

    }

    void insertatend(int val){
        Node *temp=createNode(val);
        if(!this->head){
            this->head=temp;
            this->tail=temp;
            size++;
        }
        else{
            this->tail->next=temp;
            this->tail=this->tail->next;
        }

    }

    Node* gethead(){
        return this->head;
    }

    Node* gettail(){
        return this->tail;
    }

    int getsize(){
        return this->size;
    }

    void printlist(){

        Node *temp=this->head;
        while(temp){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;

    }

    void removeduplicates(){

        unordered_map<int,int> hash;

        Node *temp=this->head;
        hash.insert({temp->data,1});

        while(temp->next){

            if(hash.find(temp->next->data)!=hash.end())
              {
               Node *del=temp->next;
               temp->next=temp->next->next;
               delete del;
              }

            else{
                hash.insert({temp->next->data,1});
                temp=temp->next;
            }

        }


    }

    int kthfromlast(int k){
        Node *temp=this->head;

        int size1=0;

        while(temp){
            temp=temp->next;
            size1++;
        }
        cout<<"The size is: "<<size1<<endl;

        int toreturn=size1-k;
        cout<<"The toreturn is: "<<size1-k<<endl;
        if(toreturn<0) return -1;

        int count1=1;

        temp=this->head;

        while(count1<toreturn){
            temp=temp->next;
            count1++;
        }

        return temp->data;

    }

};



int main(){

    int size1;
    cout<<"Enter the number of nodes: ";
    cin>>size1;

    LinkedList l;
    l.createList(size1);

    Node *head=l.gethead();
    cout<<head->data<<endl;
    l.printlist();

    l.removeduplicates();
    //l.insertatend(6);
    l.printlist();
    cout<<endl;

    cout<<l.kthfromlast(3);




}
