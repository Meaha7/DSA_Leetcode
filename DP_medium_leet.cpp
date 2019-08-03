#include<bits/stdc++.h>
using namespace std;


int main(){


	int num=5;

	vector<int> bits(num+1);

	for(int i=1;i<=num;i++){
		cout<<"i is "<<i<<" i&1 is: "<<(i&1)<<endl;
		if(i&1==0) {
			cout<<"since i&1 is 0"<<endl;
			cout<<bits[i]<<" "<<bits[i>>1]<<endl;
			bits[i]=bits[i>>1];
		}

		else {
			bits[i]=bits[i-1]+1;
		}
	}	

	for(auto i:bits){
		cout<<i<<" ";
	}
	cout<<endl;

	return 0;
}