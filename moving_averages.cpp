#include<bits/stdc++.h>
using namespace std;

int main(){

	int arr[]={1,2,3,4,5,6,7};
	int k=3;
	int sum=0;

	for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){

		if(i>=k){
			sum+=arr[i];
			sum-=arr[i-3];
			cout<<(float)sum/k<<endl;
		}

		if(i<k) {
			sum+=arr[i];
		}
		if(i==k-1){
			cout<<(float)sum/k<<endl;
		}


		
	}

	return 0;



}