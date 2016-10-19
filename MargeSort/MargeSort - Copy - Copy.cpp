#include<iostream>
using namespace std;
int mergeSort(int Arr[10], int start, int mid, int end);

int Partition(int Arr[10], int start, int end){
    int mid;
    if(start<end){
        mid=(start+end)/2;
        Partition(Arr, start, mid);
        Partition(Arr, mid+1, end);
        mergeSort(Arr, start, mid, end);
    }
}

int mergeSort(int Arr[10], int start, int mid, int end){
    int i, j, k, index=0, temp[10];
    i=start;
    j=mid+1;

    while(i<=mid && j<=end){
        if(Arr[i]<Arr[j]){
            temp[index]=Arr[i];
            i++;
        }
        else{
            temp[index]=Arr[j];
            j++;
        }
        index++;
    }

    while(i<=mid){
        temp[index]=Arr[i];
        i++;
        index++;
    }

    while(j<=end){
        temp[index]=Arr[j];
        j++;
        index++;
    }

    for(i=start, k=0; i<=end; i++){
        Arr[i]=temp[k];
        k++;
    }
}

int main(){
    int i,j,a[10],temp[10];
    int size=9;
    int Arr[9]={9,8,7,6,5,4,3,2,1};

    Partition(Arr, 0, size-1);

    for(i=0; i<size; i++){
        cout<<Arr[i]<<" ";
    }

        a[i]=temp[j];
}
