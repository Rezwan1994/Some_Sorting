#include<iostream>
#include<cstdlib>
using namespace std;
int Partition(int A[6], int a, int b);
int randomized_partition(int A[6],int p,int r);
int randomized_partition(int A[6],int p,int r)
{

    int i=p+rand()%(r-p+1);
    swap(A[r],A[i]);
    return Partition(A,p,r);
}



void randomized_Quicksort(int A[6], int p,int r){
    int q;
    if(p<r){
        q= randomized_partition(A,p,r);
        randomized_Quicksort(A, p, q-1);
        randomized_Quicksort(A, q+1, r);
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
    int i,n;
    int A[20];
    cout<<"how many data you want to enter? n= ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    int p=0, r=5;
    randomized_Quicksort(A, p, r);

    for(int i=0; i<6; i++){
        cout<<A[i]<<" ";
    }
}
