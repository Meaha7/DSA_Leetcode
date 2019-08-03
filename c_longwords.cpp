#include<bits/stdc++.h>
using namespace std;

int main(){
	
	string str;
	int numTest=0;
	cin>>numTest;
	while(numTest--){

	cin>>str;
	int len=str.length();
	if(len<=10) cout<<str<<endl;
	else cout<<str[0]<<len-2<<str[len-1]<<endl;


}
	return 0;

}
