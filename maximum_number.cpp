#include<bits/stdc++.h>
using namespace std;

int count(int arr[],int size, int index){
	int num=arr[index];
	int cnt=0;

	for(int i=0;i<size;i++){

		if(arr[i]==num) cnt++;	

	}
	return cnt;
}

int main(){
	
	int arr[]={1,2,1,3,4,6,4,1,10,7};
	int size=sizeof(arr)/sizeof(arr[0]);
	
	int min_repeats=(size/3)+1;

	srand(time(0));
	bool flag=0;
	
	for(int i=0;i<40;i++){

		int index=rand()%size;
		int cnt= count(arr,size,index);
		if(cnt>=min_repeats){
			cout<<arr[index]<<endl;
			flag=1;
			break;
		}
		if(flag==1) break;
	}
	
	if(flag==0) cout<<-1;
	return 0;
}
