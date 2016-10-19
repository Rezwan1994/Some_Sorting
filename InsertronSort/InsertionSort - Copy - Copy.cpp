#include<iostream>
using namespace std;
void input(int a[],int n);
void output(int a[],int n);
void insertionsort(int a[],int n);
int main()
{
 int a[10],n;
 cout <<"how many number you want :"<<endl;
 cin>>n;
 input(a,n);
 output(a,n);
 insertionsort(a,n);
 output(a,n);
    return 0;
}
void input(int a[],int n)
{
    cout <<"enter your array elements -"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
}
void output(int a[],int n)
{
    cout <<"your array elements are -"<<endl;
    for(int i=0;i<n;i++)
    {
        cout << a[i]<<endl;
    }
}
void insertionsort(int a[],int n)
{
    cout <<"after insertion sort:"<<endl;
    for(int select=1;select<n;select++)
    {
      int v=a[select];
     int i=select-1;
      for(;i>=0&&v<a[i];i--)
      {
          a[i+1]=a[i];
      }
      a[i+1]=v;
    }
}
