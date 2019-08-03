#include<bits/stdc++.h>
using namespace std;

//iteratively
bool binarysearch(vector<int> arr,int key){

	int left=0;
	int right=arr.size()-1;

	while(left<=right){
		int mid=(right+left)/2;

		if(arr[mid]==key){
			cout<<"found at "<<mid<<endl;
			return true;
		}

		else if(arr[mid]<key) left=mid+1;
		
		else right=mid-1;
	}

	return false;
}

//recursively
void binarysearch(vector<int> arr,int left,int right,int key){

	if(left>right) {
		cout<<"not found! "<<endl;
		return;
	}

	int mid=(right+left)/2;

	if(arr[mid]==key) {
		cout<<"found at mid "<<mid<<endl;
		return;
	}

	else if(arr[mid]>key){
		binarysearch(arr,left,mid-1,key);
	}
	else{
		binarysearch(arr,mid+1,right,key);
	}

}

int main(){

	vector<int> arr={3,4,5,6,8,9};
	int key=9;

	//iterative
	// if(!binarysearch(arr,key)) cout<<"not found!"<<endl;

	//recursive
	binarysearch(arr,0,arr.size()-1,key);

	return 0;
}