#include<bits/stdc++.h>
using namespace std;

int longestpalindrome(string str,vector<int> longest){
for(int i=0;i<str.length();i++){
	
	int temp=0;

	int ptr1=i-1;
	int ptr2=i+1;

	while(1){
		if(ptr1<0 || ptr2>=str.length()) break;

		if(str[ptr1]==str[ptr2]){
			temp+=2;
			ptr1--;
			ptr2++;
		}
		else break;
	}
	longest[i]+=temp;
}



int maxofall=INT_MIN;

for(auto i:longest) if(i>maxofall) maxofall=i;


return maxofall;
}





int main(){
	string str;
	cin>>str;
	vector<int> longest(str.length(),1);

	int maxlength=longestpalindrome(str,longest);
	cout<<maxlength<<endl;

	return 0;
}