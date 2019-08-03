#include<bits/stdc++.h>
using namespace std;



void tower(int disks, char origin, char auxilliary, char destination){

	if(disks==1){
		cout<<"from "<<origin<<" to "<<destination<<endl;
		return;
	}

	tower(disks-1,origin,destination,auxilliary);
	cout<<"from "<<origin<<" to "<<destination<<endl;
	tower(disks-1,auxilliary,origin,destination);
}


int main(){

	int levels;
	cin>>levels;

	char origin='a', destination='b', auxilliary='c';

	tower(levels,origin,destination,auxilliary);

	return 0;

}