#include<iostream>
using namespace std;
int Partition(int A[6], int a, int b);


void Quicksort(int A[6], int p,int r){
    int q;
    if(p<r){
        q= Partition(A, p, r);
        Quicksort(A, p, q-1);
        Quicksort(A, q+1, r);
    }
}


int Partition(int A[6], int p, int r){
    int x=A[r];
    int j;
    int i=p-1;

    for(j=p; j<=r-1; j++){
        if(A[j]<=x){
            i=i+1;
            int t;
            t=A[i];
            A[i]=A[j];
            A[j]=t;

        }
    }
    int b;
    b=A[i+1];
    A[i+1]=A[r];
    A[r]=b;
    return i+1;
}


int main (){
    int A[6]={2, 8, 7, 1, 3, 5};
    int p=0, r=5;
    Quicksort(A, p, r);

    for(int i=0; i<6; i++){
        cout<<A[i]<<" ";
    }
}
