#include<bits/stdc++.h>
using namespace std;



void generateset(std::vector<char> givenset){

	vector<vector<vector<char>>> superset;

	vector<vector<char>> setofsets;
	vector<char> tempvector;

	setofsets.push_back({givenset[0]});
	setofsets.push_back({'&'});

	superset.push_back(setofsets);

	for(int i=1;i<givenset.size();i++){

		vector<vector<char>> tempsets;


		for(int j=0;j<superset[i-1].size();j++){

			tempsets.push_back(superset[i-1][j]);

		}



		for(int j=0;j<superset[i-1].size();j++){

			tempvector=superset[i-1][j];

			if(superset[i-1][j][0]=='&') {

				tempsets.push_back({givenset[i]});
			}

			else {
				tempvector.push_back(givenset[i]);
				tempsets.push_back(tempvector);
			}

		}

		superset.push_back(tempsets);

	}

	sort(superset.begin(),superset.end());

	for(auto i:superset){
		for(auto j:i){
			cout<<'{';
			for(auto k:j){
				cout<<k;
			}
			cout<<"} ";
		}
		cout<<endl;
	}
}



int main(){

	int len;
	cin>>len;

	vector<char> givenset(len);

	for(int i=0;i<len;i++){
		cin>>givenset[i];
	}	
	generateset(givenset);
	return 0;
}