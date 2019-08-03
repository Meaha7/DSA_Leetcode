#include<bits/stdc++.h>
using namespace std;


int minsubarray(vector<int> arr,int len){

	int findex=0;
	int mindex=0;
	int maxlen=INT_MIN;
	int templen=0;

	for(int i=0;i<len;i++){
		if(arr[i]%2==0){
			templen++;
			if(templen==1)
				findex=i;
		}
		else{
			if(templen>maxlen){
				mindex=findex;
				maxlen=templen;
			}
			templen=0;
		}
	}
	int minimim=INT_MAX;
	for(int i=mindex;i<mindex+maxlen;i++){
		if(arr[i]<minimim){
			minimim=arr[i];
		}
	}
	return minimim;
}


int main(){

	int len;
	cin>>len;
	vector<int> arr(len);
	for(int i=0;i<len;i++){
		cin>>arr[i];
	}
	cout<<minsubarray(arr,len);
	return 0;
}