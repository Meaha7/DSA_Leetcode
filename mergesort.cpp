#include<bits/stdc++.h>
using namespace std;


void merge(int arr[],int left,int right,int mid){

	int n1=mid-left+1;
	int n2=right-mid;

	int larr[n1];
	int rarr[n2];

	for(int i=0;i<n1;i++) larr[i]=arr[left+i];

	for(auto i:larr) cout<<i<<" ";
	cout<<"		";
	

	for(int i=0;i<n2;i++) rarr[i]=arr[mid+1+i];

	for(auto i:rarr) cout<<i<<" ";
	cout<<endl;
	
	int i=0,j=0,k=left;

	while(i<n1 && j<n2){
		if(larr[i]<=rarr[j]){
			arr[k]=larr[i];
			i++;
			
		}
		else{
			arr[k]=rarr[j];
			j++;
		}
		k++;
	}

	while(i<n1){
		arr[k]=larr[i];
		i++;
		k++;
	}

	while(j<n2){
		arr[k]=rarr[j];
		j++;
		k++;
	}
}


void mergesort(int arr[],int left,int right){

	if(left<right){
		int mid=(left+right)/2;
		mergesort(arr,left,mid);
		mergesort(arr,mid+1,right);
		merge(arr,left,right,mid);
	}
	else return;

}


int main(){

	cout<<"left"<<"		"<<"right"<<endl;		
	int arr[]={4,3,1,2,6,5};

	mergesort(arr,0,(sizeof(arr)/sizeof(arr[0]))-1);

	for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++) cout<<arr[i]<<" ";

	return 0;
}