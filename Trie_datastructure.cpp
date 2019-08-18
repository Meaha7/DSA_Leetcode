#include<iostream>
#define CHAR_SIZE 128


using namespace std;

class Trie{

public:
    bool isLeaf;
    Trie *character[CHAR_SIZE];

    Trie(){
        this->isLeaf=false;
        for(int i=0;i<CHAR_SIZE;i++){
            this->character[i]=nullptr;
        }

    }
    bool search(std::string);
    void insert(std::string);

};

void Trie::insert(std::string key){

    Trie *curr=this;
    for(int i=0;i<key.length();i++){
        if(curr->character[key[i]]==nullptr)
        curr->character[key[i]]=new Trie;

        curr=curr->character[key[i]];
    }
    curr->isLeaf=true;

}

bool Trie::search(std::string key){

    if(!this) return false;

    Trie *curr=this;

    for(int i=0;i<s.length();i++){
        curr=curr->character[key[i]];
        if(!curr) return false;
    }
    return curr->isLeaf;

}


int main(){

Trie *head=new Trie;
head->insert("arush");
cout<<head->search()

return 0;



}
