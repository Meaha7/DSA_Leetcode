#include<bits/stdc++.h>
using namespace std;

#define len 5


class Hash{

private:
	vector<vector<int>> hashmap;

public:

	Hash(): hashmap(len){}
	
	

	void insert(int num){
		int index=num%len;
		hashmap[index].push_back(num);
	}

	bool search(int num){
		int index=num%len;
		for(int i=0;i<hashmap[index].size();i++){
			if(hashmap[index][i]==num){
				return true;
			}
		}

		return false;
	}

};


int main(){

	Hash h1;
	h1.insert(1);
	h1.insert(2);
	h1.insert(3);
	cout<<h1.search(3);

	return 0;

}