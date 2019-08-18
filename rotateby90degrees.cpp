#include<iostream>

using namespace std;

void swap1(int *arr,int i,int j,int k,int l,int N){

    int temp=*(arr+l*N+i);
    *(arr+l*N+i)=*(arr+j*N+l);
    *(arr+j*N+l)=*(arr+k*N+j);
    *(arr+k*N+j)=*(arr+i*N+k);
    (*(arr+i*N+k))=temp;
}

void printarray(int *arr, int N){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
           cout<<*(arr+i*N+j)<<" ";
        }
        cout<<endl;
    }
}

#include<string>
int main(){
    int N;
    cin>>N;
    int count1=1;
    int arr[N][N];
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            arr[i][j]=count1;
            count1++;
        }
    }

    //this works
    //int (*pointer)[N]=arr;
    // this doesn't work: int pointer
    int layer=N/2;
    int currlayer=0;
    while(currlayer<layer){
        //cout<<"Current layer: "<<currlayer<<endl;
        int i=currlayer,j=N-currlayer-1,k=currlayer,l=N-currlayer-1;
        //cout<<"Swapping: "<<i<<" "<<k<<" , "<<k<<" "<<j<<" , "<<j<<" "<<l<<" , "<<l<<" "<<i<<endl;

        while(k<N-currlayer-1 && l>currlayer){
        //cout<<"Value of k is: "<<k<<" which is less than: "<<N-currlayer-1<<endl;
        //cout<<"Value of l is: "<<l<<" which is greater than: "<<currlayer<<endl;
        swap1((int*) arr,i,j,k,l,N);
            k++;
            l--;
        }
        currlayer++;
    }

    cout<<endl;
    printarray((int*)arr,N);
    return 0;

}


//Hurray done it!!!
