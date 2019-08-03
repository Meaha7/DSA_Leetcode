#include<bits/stdc++.h>
using namespace std;


bool ispalindrome(string s){
	unordered_map<char,int> hash;
	for(auto i:s){
		if(hash.find(i)==hash.end()){
			hash[i]=1;
		}
		else{
			hash[i]++;
		}
	}
	bool flag=true;
	bool first=true;
	for(auto i:hash){
		if(i.second%2!=0){
			
			if(first) first=false;
			
			else flag=false;
			
		}
	}
	return flag;
}


void getsubtrings(string str, vector<string> &subtr){
	int len=1;
	while(len<=str.length()){
		int startlen=0;
		int endlength=len;
		while(endlength<=str.length()){
			string temp="";
			for(int i=startlen;i<endlength;i++){
				temp+=str[i];
			}
			startlen++;
			endlength++;
			subtr.push_back(temp);
		}
		len++;
	}
}



int main(){
	string str;
	cin>>str;
	vector<string> subtr;
	getsubtrings(str,subtr);
	for(auto i:subtr){
		cout<<i<<" ";
	}
	cout<<endl;
	int count=0;
	for(auto i:subtr){
		if(ispalindrome(i)){
			cout<<i<<" is palindrome"<<endl;
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}