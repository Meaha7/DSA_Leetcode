using namespace std;
int main()
 {
    int numTest,len;
    cin>>numTest;

    for(int i=0;i<numTest;i++){
        cin>>len;
        int arr[len];
        int larr[len];
        for(int j=0;j<len;j++){
            cin>>arr[j];
        }
        larr[len-1]=arr[len-1];

        for(int j=len-2;j>=0;j--){
            larr[j]=larr[j+1]+arr[j];
        }
        for(int j=0;j<len-1;j++){
            if(arr[j]>(larr[j]-arr[j])) cout<<arr[j]<<" ";
        }
        cout<<arr[len-1]<<" "<<endl;
    }
	return 0;
}
