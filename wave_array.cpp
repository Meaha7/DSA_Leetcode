#include<iostream>

using namespace std;

int main() {
	int numTest,len;
	cin>>numTest;

	for(int i=0;i<numTest;i++){
	    cin>>len;
	    int arr[len];
	    if(len%2==0){
	        for(int j=0;j<len;j=j+2){
	        cin>>arr[j+1]>>arr[j];
	        }
	    }
	    else{
	        for(int j=0;j<len-1;j=j+2){
	        cin>>arr[j+1]>>arr[j];
	        }
	        cin>>arr[len-1];
	    }
	    for(int j=0;j<len;j++){
	        cout<<arr[j]<<" ";
	    }
	    cout<<endl;

	}
return 0;
}
