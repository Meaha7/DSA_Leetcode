#include<bits/stdc++.h>
#define MAX 26
using namespace std;



//HashMap implementation using vector of vector
class Hash{

private:
	vector<vector<int>> hashvector;
 
public:
	Hash(): hashvector(MAX){}

	void insert(int num){
		int index=num%MAX;
		hashvector[index].push_back(num);
	}

	int search(int num){
		int index=num%MAX;

		if(this->hashvector[index].size()==0) return -1;

		else{
			for(auto i:this->hashvector[index]){
				if(i==num) return index;
			}
		}
		return -1;
	}
};

int main(){
	Hash h;
	h.insert(1);
	h.insert(27);
	cout<<h.search(28)<<endl;
	return 0;
}