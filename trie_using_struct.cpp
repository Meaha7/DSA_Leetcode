#include<bits/stdc++.h>
#define N 4
using namespace std;


bool canplace(vector<vector<int>> board,int i,int j){

	//check in the same row
	for(int k=0;k<N;k++){
		if(board[i][k]==1) return false;
	}

	//check in the same column
	for(int k=0;k<N;k++){
		if(board[k][j]==1) return false;
	}

	//check diagonally
	int tempi=i,tempj=j;

	while(tempi>=0 || tempj>=0){
		tempi--;
		tempj--;
		if(board[tempi][tempj]==1) return false;
	}

	int tempi=i,tempj=j;

	while(tempi<N || tempj<N){
		tempi++;
		tempj++;
		if(board[tempi][tempj]==1) return false;
	}

	return true;
}

bool solve(vector<vector<int>> board,int i, int j){

	for(int x=i;x<N;x++){
		for(int y=j;y<N;y++){
			if(canplace(board,x,y)){

				if(x==N-1) return true;


				board[x][y]=1;
				bool solvable=solve(board,i+1,j);

				if(solvable==false){
					board[x][y]=0;
					continue;
				}
				else return true;

			}
		}
		if(y==N){
			return false;}
		
		}
}



/*
void solve(vector<vector<int>> &board,int i,int j, int lasti, int lastj, int numqueens){


	if(numqueens<N && j>=N) solve(board,i-1,lastj+1,numqueens--) 

	bool flag;
	int lasti,lastj;

	while(i<N){
		flag=false;
		while(j<N){
			if(canplace(board[i][j])){
				board[i][j]=1;
				numqueens++;
				lasti=i;
				lastj=j;
				flag=true;
				break;
			}
		}

		if(flag==false){
				board[lasti][lastj]=0;
				solve(board,i-1,lastj+1,numqueens);
			}

		else i++;
	}
	return;
}

*/

int main(){
	vector<vector<int>> board(N);

	for(int i=0;i<N;i++){
		vector<int> row(N);
		for(int j=0;j<N;j++){
			row[j]=0;
		}
		board[i]=row;
	}

	
	bool solveit = solve(board,0,0);
	

	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			if(board[i][j]==1) cout<<i<<" "<<j;
		}
		cout<<endl;
	}
	return 0;
}