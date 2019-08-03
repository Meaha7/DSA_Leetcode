#include<bits/stdc++.h>

using namespace std;


/*int chartoint(string str){
	int result=0;
	for(int i=0;i<str.length();i++){
		result=result*10 +(str[i]-'0');
	}
	return result;
}

int combination(string str,int start,int end){

	if(str[start]=='0') return -1;

	if(start==end) return 1;

	int left=combination(str,start+1,end);
	int right=0;

	string temp="";
	temp+=str[start];
	temp+=str[start+1];

	if(chartoint(temp)>=10 && chartoint(temp)<=26) {
		right=combination(str,start+2,end);
	}

	return left+right;

}*/



int main(){

	/*for(int i=97;i<123;i++){
		cout<<i-96<<": "<<(char)i<<endl;
	}*/

	string str;
	cin>>str;
	int start=0;
	int end=str.length()-1;
	//int res=0;
	cout<<combination(str,start,end);
	return 0;
}