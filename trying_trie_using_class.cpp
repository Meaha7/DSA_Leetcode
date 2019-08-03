#include<bits/stdc++.h>
using namespace std;


//Features: Add, Auto-complete, Search


class Trie{

private:
	struct TrieNode{
		TrieNode* children[26];
		bool is_end;
	};

	TrieNode* root;
public:
	//Constructor
	Trie(){
		//two options, either to initialize root, or not?
		//Going with the first option
		root=new TrieNode;

		for(int i=0;i<26;i++){
			root->children[i]=nullptr;
		}
		root->is_end=false;
	}

	TrieNode* getNode(char c){
		int index=c-'a';

		TrieNode *temp=new TrieNode;

		for(int i=0;i<26;i++){
			temp->children[i]=nullptr;
		}
		
		temp->is_end=false;

		return temp;
	}

	void insert(string str){

		for(int i=0;i<str.length();i++){

			TrieNode *temp=this->root;

			int index=str[i]-'a';
			cout<<"index is: "<<index<<endl;
			while(1){
				if(!temp->children[index]) break;
				cout<<"Going: "<<(char)index<<" ";
				temp=temp->children[index];
			}

			temp->children[index]=getNode(str[i]);
			if(i==str.length()-1){
				temp->children[index]->is_end=true;
			}	
		}
	}


	bool search(string str){

		TrieNode* temp=this->root;

		for(auto i:str){
			
			int index=i-'a';

			if(!temp->children[index]) return false;

			else{
				cout<<"Going: "<<(char)index;
				temp=temp->children[index];
			}
			}
		return temp->is_end;

	}

};	

int main(){
	Trie t;
	t.insert("arush");

	cout<<t.search("arush");

return 0;

}