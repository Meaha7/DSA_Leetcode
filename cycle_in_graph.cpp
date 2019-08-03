#include<bits/stdc++.h>
using namespace std;


bool cycle(std::vector<int> adj[],int v){

	stack<int> stack;
	std::vector<int> vertices(v);
	
	std::unordered_map<int,int> visitedhash;

	for(int i=0;i<v;i++){
		stack.push(i);
		cout<<"For element: "<<i<<endl;

		unordered_map<int,int> currhash;

		while(stack.size()!=0){

			int temp=stack.top();
			cout<<"stack's top is: "<<stack.top()<<endl;
			
			currhash[temp]=1;
			stack.pop();

			for(int i=adj[temp].size()-1;i>=0;i--){
				if(currhash.find(adj[temp][i])!=currhash.end()) return true;
				if(visitedhash.find(adj[temp][i])!=visitedhash.end()) continue;
				
				
				stack.push(adj[temp][i]);
				currhash[adj[temp][i]]=1;

			}
			
			cout<<"Printing currhash"<<endl;
			for(auto i:currhash){
				cout<<i.first<<" ";
			}
			cout<<endl;
			currhash.erase(temp);
			visitedhash[temp]=1;
		}
	}
	return false;
}


int main(){

	int numTest;
	cin>>numTest;
	while(numTest--){

		int v,edges;
		cin>>v>>edges;
		int org,dest;

		std::vector<int> adj[v];

		for(int i=0;i<edges;i++){
			cin>>org>>dest;
			adj[org].push_back(dest);
		}
		int counter=0;
		for(auto i:adj){
			cout<<counter<<": ";
			counter++;
			for(auto elem:i){
				cout<<elem<<" ";

			}
			cout<<endl;
		}
		//cout<<adj[1][0];

		cout<<"Status of Cycle: "<<cycle(adj,v)<<endl;
	}
	return 0;
}