#include<bits/stdc+++.h>
using namespace std;


bool checkequal(vector<int> v1, vector<int> v2){

	for(int i=0;i<v1.size();i++){
		if(v1[i]!=v2[i]) return false;
	}

	return true;
}

int main(){


	int numTest;
	cin>>numTest;

	while(numTest--){

		int len;

		cin>>len;

		vector<int> perm(len);

		for(int i=0;i<len;i++){
			cin>>perm[i];
		}

		vector<int> pos(len);

		for(int i=0;i<len;i++){
			pos[i]=i+1;
		}

		vector<int> temp1(len);
		vector<int> temp2(len);

		temp1=pos;

		int counter=0;
		int second=0;


		while(1){
			counter=0;
			for(auto i:perm){
				temp2[i-1]=temp1[counter];
				counter++;
			}
			second++;
			if(checkequal(temp2,pos)) break;
			temp1=temp2;
		}

		cout<<seconds;

	}


	return 0;

}