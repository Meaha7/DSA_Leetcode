#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;




/*

int fact(int n){

    if(n<=1) return 1;
    int a=1;
    int result=1;
    for(int i=0;i<n;i++){
        result=result*a;
        a++;
    }
    return result;


}
int perm(int n,int r){

    return fact(n)/fact(n-r);

}

int main(){

    int a=5;
    int b=3;
    cout<<perm(5,3);
    return 0;
}

*/

//study about calloc

/*scanf returns the number of successful scans of input, in this case, it will be 2

int main(){

char c[10],d[10];


int num=scanf("%s %s",c,d);

cout<<num;

return 0;

}
*/


/* printf actually returns the number of digits in the printed screen.
int main(){
    int i=10,j=2;
    printf("%d hello1 \n",printf("%d hello2 %d\n",i,j));
    return 0;
}


*/



/* Output is still 1

int main(){

    int x=1;
    int *p=&x;
    realloc(p0);

    cout<<*p;

    return 0;


}
/* Output: Compile time error, invalid conversion from void*  to p*
struct p{
    p *next;
    int x;
};


int main(){

    p *p1=calloc(1,sizeof(p));
    p1->x=1;
    p1->next=nullptr;

    return 0;




}



/* can convert from float or double to char, but not float to char pointer, runtime error;

int main(){
    float f=1.1f;
    char *c=f;
    cout<<c;
    cout<<f;
    return 0;

}


/* if we have not given any value to max, it will be assigned to null; output hello
#define max
int main(){
max;
cout<<"hello";
return 0;
}

/* for negative numbers, output of % is also negative, output: -1
int main(){

    int i=-3;
    int k=i%2;
    cout<<k;
    return 0;


}



/* Loop can iterate over double value also, Output 0,1,2
int main(){
double k=0;
for(k=0.0;k<3.0;k++){
    cout<<k;
}

}
*/

/* Output: In loop, After loop;
int main(){
int i=0;
for(i++;i==1;i=2) cout<<"In loop";

cout<<"After loop";
return 0;

}




/* Answer: Nullp & nullq
int main(){

    char *p=NULL;
    char *q=0;
    if(p) cout<<p;

    else cout<<"nullp";

    if(q) cout<<q;
    else cout<<"nullq";
    return 0;
}
*/



/* % has more priority than the *
int main(){
int x=5%2*3;
cout<<x;
return 0;
}
*/

/*Error: Invalid array assignment
int main(){
int arr[4]={1,2,3,4};
int p[4];
p=arr;
cout<<p[1];
return 0;
}
*/



/* Error: too many arguments
void m(int p){
cout<<p;
}

int main(){
int a=6,b=5;
m(a,b);
return 0;
}
*/
