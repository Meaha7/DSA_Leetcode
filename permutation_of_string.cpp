#include<bits/stdc++.h>
using namespace std;


bool isalljumbled(string given,string str){
	for(int i=0;i<str.length();i++){
		if(given[i]==str[i]) return false;
	}
	return true;
}


void permutation(string str, char temp[], vector<string> &perm,vector<int> pos,int level){
	
	if(level==str.length()){
		string finalstring="";
		for(int i=0;i<str.length();i++){
			finalstring+=temp[i];
		}

		perm.push_back(finalstring);
		//cout<<finalstring<<" ";
		return;
	}


	for(int i=0;i<str.length();i++){
		if(pos[i]==1) continue;

		temp[level]=str[i];
		pos[i]++;
		permutation(str,temp,perm,pos,level+1);
		pos[i]--;
		
	}
}




















	/*bool flag=true;

	for(auto i:pos){
		if(i!=1){
			flag=false;
		}
	}

	if(flag==true){
		perm.push_back(temp);
		pos[lastpos]=0;
		temp
		permutation(str,temp)
	}

	for(int i=0;i<str.length();i++){

		
		if(pos[i]==0) {
			temp+=str[i];
			pos[i]=1;
			lastpos=i;
		}

		else{

		}
		permutation(str,temp,perm,pos);


	}*/



int main(){

	string str;
	cin>>str;

	vector<string> perm;

	char temp[str.length()];
	int level=0;

	vector<int> pos(str.length());

	for(int i=0;i<str.length();i++){
		pos[i]=0;
	}
	//for(auto i:pos) cout<<i<<" ";

	permutation(str,temp,perm,pos,level);

	for(auto i:perm){
		cout<<i<<" ";
	}
	int count=0;

	for(auto i:perm){
		if(isalljumbled(str,i)) count++;
	}

	cout<<count;

	return 0;
}