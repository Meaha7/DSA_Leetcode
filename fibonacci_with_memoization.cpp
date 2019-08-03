#include<bits/stdc++.h>
#include<chrono>
using namespace std;



int fib(int n,vector<long long> &memo){
	//cout<<"calling out: "<<n<<endl;
	if(n<=1) {
		//cout<<"returning for "<<n<<": "<<memo[n]<<endl;
		return memo[n];
	}
	if(memo[n]!=0) {
		//cout<<"returning for "<<n<<": "<<memo[n]<<endl;
		return memo[n];
	}

	else{
		memo[n]=fib(n-1,memo)+fib(n-2,memo);	
	}
	
}

int fib(int n){
	//cout<<"calling out: "<<n<<endl;
	if(n<=1) return n;
	
	return fib(n-1)+fib(n-2);
}


int main(){

	

	int num;
	cin>>num;

	auto start = chrono::high_resolution_clock::now(); 

	vector<long long> memo(num+1);

	memo[0]=0;
	memo[1]=1;
	//memo[2]=1;



	//cout<<memo[1]<<memo[0]<<endl;


	int fibonacci=fib(num,memo);
	//int fibonacci=fib(num);

	auto stop = chrono::high_resolution_clock::now(); 

	auto duration = chrono::duration_cast<chrono::microseconds>(stop - start); 

	cout <<"duration of program: "<< duration.count() << endl; 

	cout<<fibonacci<<endl;

	return 0;


}