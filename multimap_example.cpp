#include<map>
#include<cmath>
using namespace std;

int main() {
	int numTest,len,num,k;
	cin>>numTest;

	for(int i=0;i<numTest;i++){
	    cin>>len>>k;
	    multimap<int,int> hash;
	    for(int j=0;j<len;j++){
	        cin>>num;
	        hash.insert({abs(k-num),num});
	    }
	    for(auto j:hash){
	        cout<<j.second<<" ";
	    }
	    cout<<endl;

	}
	return 0;
}
