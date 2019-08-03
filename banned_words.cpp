#include<bits/stdc++.h>
using namespace std;


string extract(vector<string> strings, vector<string> banned){


	unordered_map<string,int> hash;


	for(auto i:strings){

		if(hash.find(i)==hash.end()){
			hash[i]=1;
		}

		else{
			hash[i]++;
		}
	}


	for(auto i:banned){
		if(hash.find(i)!=hash.end()){
			hash[i]=0;
		}
		
	}

	int max=INT_MIN;
	string result="";

	for(auto i:hash){
		if(i.second>max){
			max=i.second;
			result=i.first;
		}
	}

	return result;
}



int main(){

	string str;
	getline(cin,str);

	string converted="";

	string temp="";

	vector<string> banned;

	cout<<"Now enter the list of banned words, enter -1 to stop: "<<endl;

	while(1){
		cin>>temp;
		if(temp=="-1"){
			break;
		}
		banned.push_back(temp);
	}

	temp="";


	for(auto i:str){

		cout<<i<<" and"<<i-1<<endl;
		if(i>=65 && i<=90){
			converted+=(char)(i-65+97);
		}
		else if(i-1>=65){
			continue;
		}
		else if((i>=97 && i<=122) || i==32 ){
			converted+=i;
		}
		else{
			converted+=' ';
		}

	}

	vector<string> strings;

	cout<<converted<<endl;
	
	for(auto i:converted){
		
		if(i!=32){
			temp+=i;
		}

		else{
			strings.push_back(temp);
			temp="";
		}
	}


	strings.push_back(temp);


	cout<<extract(strings,banned)<<endl;

	return 0;

}