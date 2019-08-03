#include<bits/stdc++.h>
using namespace std;


bool checkifok(vector<vector<int>> sudoku,int toput, int i, int j){

	//row check

	for(int column=0;column<len;column++){
		if(sudoku[i][column]==toput) return false;
	}

	//column check

	for(int row=0;row<len;row){
		if(sudoku[row][j]==toput) return false;
	}

	//cell check

	//first extract cell's beginning i & j values
	int cellrow=i,cellcol=j;
	while(cellrow%3!=0 && cellcol%3!=0){
		if(cellrow%3!=0) cellrow--;
		if(cellcol%3!=0) cellcol--;
	}

	for(int row=cellrow;row<cellrow;row++){
		for(int col=cellcol;col<cellcol;col++){
			if(sudoku[row][col]==toput) return false;
		}
	}

	//if passes all three tests, return true;

	return true;

}


void sudokusolver(vector<vector<int>> sudoku, int len, int i, int j){

	if(j==len-1 || (i==len-1 && j==len-1)) return;


	for(int i=0;i<len;i++){
		for(int j=0;j<len;j++){
			if(sudoku[i][j]!=0){
				if(i>=len-1) sudokusolver(sudoku,len,i+1,0);
				else sudokusolver(sudoku,len,i,j+1);
			}

			else{
				for(int toput=1;toput<=9;toput++){
					if(checkifok(sudoku,toput,i,j)){
						sudoku[i][j]=toput;
					}
				}

			}
		}
	}

	

}


int main(){

	int numTests;
	cin>>numTests;

	while(numTests--){

		vector<vector<int>> sudoku(9);

		for(int i=0;i<9;i++){
			vector<int> temp(9);

			for(int j=0;j<9;j++){
				cin>>temp[j];
			}
			sudoku[i]=temp;
		}

		int i=0,j=0;
		sudokusolver(sudoku,len,i,j)



	}

}