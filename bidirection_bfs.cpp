#include<bits/stdc++.h>
using namespace std;


vector<int> bidirectionalbfs(int node1,int node2,vector<vector<int>> adjacency){


	queue<int> q1,q2;

	vector<int> v1,v2;

	q1.push(node1);
	q2.push(node2);


	while(q1.size()!=0){
		int temp=q1.front();
		v1.push_back(temp);
		q1.pop();
		for(int i=0;i<adjacency[temp].size();i++){
			q1.push(adjacency[temp][i]);
		}
	}

	while(q2.size()!=0){
		int temp=q2.front();
		v2.push_back(temp);
		q2.pop();
		for(int i=0;i<adjacency[temp].size();i++){
			q2.push(adjacency[temp][i]);
		}
	}





}


int main(){


	int vertice,edges;

	int origin, destination;

	std::vector<vector<int>> adjacency(vertice);

	for(int i=0;i<edges;i++){
		cin>>origin>>destination;
		adjacency[origin].push_back(destination);
	}

	cout<<"Enter the two vertices between which you want to get the smallest distance: ";
	int node1, node2;
	cin>>node1>>node2;

	vector<int> vertices_in_between;
	vertices_in_between=bidirectionalbfs(node1,node2,adjacency);

 return 0;

}