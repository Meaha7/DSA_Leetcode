/*#include<iostream>
using namespace std;

void printarray(int arr[],int size1){

    for(int i=0;i<size1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

void Merge(int arr[],int l,int m,int r){

    int n1=m-l+1;
    int n2=r-m;

    int L[n1];
    int R[n2];
    int i=0,j=0;

    for(i=0;i<n1;i++){
        L[i]=arr[l+i];
    }

    for(j=0;j<n2;j++){
        R[j]=arr[m+1+j];
    }

    i=0,j=0;
    int k=l;

    while(i<n1 && j<n2){
        if(L[i]<=R[j]){
            arr[k]=L[i];
            i++;
        }
        else{
            arr[k]=R[j];
            j++;
        }
        k++;
    }

    while(i<n1){
        arr[k]=L[i];
        i++;
        k++;
    }

    while(j<n2){
        arr[k]=R[j];
        j++;
        k++;
    }

}

void mergesort(int arr[],int l,int r){//here r is last index

    if(l<r){
        int m = l +(r-l)/2;
        mergesort(arr,l,m);
        mergesort(arr,m+1,r);
        Merge(arr,l,m,r);
    }

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    mergesort(arr,0,n-1);
    printarray(arr,n);

return 0;
}*/
#include<iostream>
using namespace std;
void Merge(int arr[], int left, int mid, int right){

    int n1=mid-left+1;
    int n2=right-mid;

    int L[n1];
    int R[n2];

    int i=0,j=0,k=left;

    for(i=0;i<n1;i++) {
            L[i]=arr[left+i];
    }

    for(j=0;j<n2;j++) R[j]=arr[mid+1+j];

    i=0,j=0;

    while(i<n1 && j<n2){

        if(L[i]<=R[j]){
            arr[k]=L[i];
            i++;
        }
        else{
            arr[k]=R[j];
            j++;
        }
        k++;

    }

    while(i<n1){
        arr[k]=L[i];
        i++;
        k++;
    }

    while(j<n2){
        arr[k]=R[j];
        j++;
        k++;
    }



}

void print(int arr[],int size1){

    for(int i=0;i<size1;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

void mergesort(int arr[],int left, int right){

    if(left<right){

            int mid=left + (right-left)/2;

            mergesort(arr,left,mid);
            mergesort(arr,mid+1,right);
            Merge(arr,left,mid,right);

    }

}



#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    mergesort(arr,0,n-1);
    print(arr,n);

}
