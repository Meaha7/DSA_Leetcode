#include <bits/stdc++.h>
using namespace std;


void findways(vector<vector<int>> maze, vector<string> &ans, string str,int i,int j,int len){

	if(i<0 || j<0 || i>=len || j>=len || maze[i][j]==0 || maze[i][j]==-1) return;

	else if(i==len-1 && j==len-1){
		ans.push_back(str);
		return;
	}

	else{
		maze[i][j]=-1;
		findways(maze,ans,str+'D',i+1,j,len);
		findways(maze,ans,str+'U',i-1,j,len);
		findways(maze,ans,str+'L',i,j-1,len);
		findways(maze,ans,str+'R',i,j+1,len);
		maze[i][j]=1;
	}
}


int main(){

	int numTests;
	cin>>numTests;

	while(numTests--){

		int len;
		cin>>len;

		vector<vector<int>> maze(len);

		for (int i = 0; i < len; i++){

			vector<int> temp(len);
			for (int j = 0; j < len; j++) cin>>temp[j];
			maze[i]=temp;
		}

		for(int i=0;i<len;i++){
			for(int j=0;j<len;j++){
				cout<<maze[i][j]<<" ";
			}
			cout<<endl;
		}

		
		int i=0,j=0;

		vector<string> ans;
		string str="";

		findways(maze,ans,str,i,j,len);

		for(auto &i:ans){
			cout<<i<<" ";
		}
		cout<<endl;
	}



	return 0;
}