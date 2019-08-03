#include<bits/stdc++.h>
using namespace std;


int main(){

	int sum=0, numcuts=0;

	cin>>sum>>numcuts;

	vector<int> tempcuts(numcuts);

	for(int i=0;i<numcuts;i++){
		cin>>tempcuts[i];
	}



	vector<int> DP(sum+1,INT_MIN);

	//eg 4, 2 1 1

	unordered_map<int,int> hash;

	vector<int> cuts;

	for(int i=0;i<numcuts;i++){
		if(hash.find(tempcuts[i])==hash.end()){
			cuts.push_back(tempcuts[i]);
			hash[tempcuts[i]]=1;
		}
	}
	//base case

	DP[0]=0;

	//when sum to make is 0, the max number of cuts are 0;

	//when sum is 1, the max number of cuts is max(1+DP[sum-2],1+[sum-1], 1+[sum-1]


	for(int i=1;i<=sum;i++){
		int temp=INT_MIN;
		int j=0;
		while(j<cuts.size()){
			int index=i-cuts[j];
			j++;
			if(index>=0){
				if(DP[index]!=INT_MIN) temp=max(temp,1+DP[index]);
			}
			else continue;
		}
		DP[i]=temp;
	}

	cout<<DP[sum]<<endl;


	return 0;
}