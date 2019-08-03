#include<bits/stdc++.h>
using namespace std;



int main(){
	/*

	vector<int> v={-9,-6,-5,1,2,5};
	vector<int> result;


	int i=0;
	int j=v.size()-1;


	while(i<=j){

		if(abs(v[i])>=abs(v[j])){
			result.push_back(v[i]*v[i]);
			i++;
		}

		else{
			result.push_back(v[j]*v[j]);
			j--;
		}
	}

	reverse(result.begin(),result.end());

	for(auto i:result){
		cout<<i<<" ";
	}
	cout<<endl;
*/
	vector<int> v={1,2,3,4,5};
	for(auto i:v){
		*i=1;
	}
	for(auto i:v){
		cout<<i<<" ";
	}
	return 0;

}