#include<bits/stdc++.h>
using namespace std;

int main(){
	string str="knowledge";
	int m=12;
	
	while(1){
		if(m<str.length()){
			reverse(str.begin(),str.begin()+m);
			break;
		}
		else{
			reverse(str.begin(),str.end());
			m=m-str.length();
		}
	}
	cout<<str<<endl;
	return 0;
}