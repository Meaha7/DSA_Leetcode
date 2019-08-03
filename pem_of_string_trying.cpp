#include <bits/stdc++.h>
using namespace std;


bool isjumbled(string str, string givenstr){

	for(int i=0;i<str.length();i++){
		if(str[i]==givenstr[i]) return false;
	}

	return true;
}


void permutation(string str, char temp[],vector<string> &perm,vector<int> pos,int level){
	if(level==str.length()){
		string finalstring="";
		for(int i=0;i<str.length();i++){
			finalstring+=temp[i];
		}
		perm.push_back(finalstring);
		return;
	}

	for(int i=0;i<str.length();i++){
		if(pos[i]==1) continue;
		temp[level]=str[i];
		pos[i]=1;
		permutation(str,temp,perm,pos,level+1);
		pos[i]=0;
	}

}


int main(){


	string str;
	cin>>str;

	vector<int> pos(str.length());
	for(int i=0;i<str.length();i++){
		pos[i]=0;
	}

	char temp[str.length()];

	vector<string> perm;
	int level=0;

	permutation(str,temp,perm,pos,level);

	int counter=0;

	for(auto i:perm){
		if(isjumbled(str,i)) counter++;
	}

	cout<<counter<<endl;

	for(auto i:perm){
		cout<<i<<" ";
	}

	return 0;


}