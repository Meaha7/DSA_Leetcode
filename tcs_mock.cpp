#include<bits/stdc++.h>
using namespace std;

int main(){

	int n,k;
	cin>>n>>k;

	int arr[n][n];

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	
	int result[n-k+1][n-k+1];
	int tempsum=0;

	int startx=0;
	int starty=0;
	
	
	int resulti=0,resultj=0;

	for(startx=0;startx<k;startx++){

		for(int i=startx;i<n-k+1+startx;i++){

			for(starty=0;starty<k;starty++){
				
				int tempsum=0;
				for(int j=starty;j<n-k+1+starty;j++){
					tempsum+=arr[i][j];
				}

			result[resulti][resultj]=tempsum;
			resultj++;
				
			}
			resulti++;
		}
	}

	for(int i=0;i<n-k+1;i++){
		for(int j=0;j<n-k+1;j++){
			cout<<result[i][j]<<" ";
		}
	cout<<endl;
	}

	return 0;

}

/*

5 4
1 1 1 1 1
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4
5 5 5 5 5

*/
