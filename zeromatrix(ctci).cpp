#include<iostream>

using namespace std;


void zerofy(int *arr, int i,int j, int M, int N){

    cout<<"I am being called"<<endl;
    cout<<"Value of i and j: "<<i<<" "<<j<<endl;
    for(int row=0;row<N;row++){
    cout<<"Setting: "<<i*N+row<<" = 0"<<endl;
        (*(arr+i*N+row))=0;
    }
    cout<<endl;
    for(int col=0;col<M;col++){
    cout<<"Setting: "<<col*N+j<<" = 0"<<endl;
        (*(arr+col*N+j))=0;
    }

}


int main(){

    int M=0,N=0,i=0,j=0;

    cin>>M>>N;

    int arr[M][N];

    cout<<"M and N are: "<<M<<" "<<N<<endl;


    int zerosarray[M*N][2];


    for(i=0;i<M;i++){
        for(j=0;j<N;j++){
            cin>>arr[i][j];
        }
    }
    for(i=0;i<M;i++){
        for(j=0;j<N;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int count1=0;
    for(i=0;i<M;i++){
        for(j=0;j<N;j++){
            if((arr[i][j])==0){
                zerosarray[count1][0]=i;
                zerosarray[count1][1]=j;
                count1++;}
        }
    }


    for(i=0;i<count1;i++){
            zerofy((int*) arr, zerosarray[i][0],zerosarray[i][1],M,N);
        }


    cout<<endl;
    for(i=0;i<M;i++){
        for(j=0;j<N;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}
