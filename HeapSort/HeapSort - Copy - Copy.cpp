#include<iostream>
using namespace std;
void adjust_max(int tree[],int i,int n);
void adjust_min(int tree[],int i,int n);
void deletetree(int tree[],int n);
void heap_sort(int tree[],int n);

int main ()
{
    int n,i;
    int tree [100];
    cout <<"How many elements you want to enter inm your array !"<<endl;
    cin >>n;
    cout <<"Enter your elments in the tree "<<endl;
    for (int j=0;j<n;j++)
    {
        cin>>tree[j];
    }
    cout << "\nyou ve entered :";
    for (int j=0;j<n;j++)
    {
        cout <<tree[j];
    }
    for (i=(n/2)-1;i>=0;i--)
    {
       adjust_max(tree,i,n);
    }

    cout << "\nyour max heap :";
    for (int j=0;j<n;j++)
    {
        cout <<tree[j];
    }

    for (i=(n/2)-1;i>=0;i--)
    {
       adjust_min(tree,i,n);
    }

    cout << "\nyour min heap :";
    for (int j=0;j<n;j++)
    {
        cout <<tree[j];
    }
    deletetree(tree,n);
    cout << "\nafter deletion your elements are:";
    for (int j=0;j<n;j++)
    {
        cout <<tree[j];
    }
    heap_sort(tree,n);
    cout << "\nafter heap sort your elements are:";
    for (int j=0;j<n;j++)
    {
        cout <<tree[j];
    }

    return 0;
}
void adjust_max(int tree[],int i,int n)
{
    int max_index;
    int maxvalue;
    int left=2*i+1;
    int right=2*i+2;
    if (left<n && tree[i]<tree[left])
    {
       max_index=left;
        maxvalue = tree[left];
    }
    else
    {
        max_index=i;
        maxvalue=tree[i];
    }
    if (right<n&&tree[right]>maxvalue)
    {
        max_index=right;
        maxvalue=tree[right];

    }
    if (i!=max_index)
    {
        swap(tree[i],tree[max_index]);
        adjust_max(tree,max_index,n);
    }
}
void adjust_min(int tree[],int i,int n)
{

    int min_index;
    int minvalue;
    int left=2*i+1;
    int right=2*i+2;
    if (left<n && tree[i]>tree[left])
    {
       min_index=left;
        minvalue = tree[left];
    }
    else
    {
        min_index=i;
        minvalue=tree[i];
    }
    if (right<n&&tree[min_index]>tree[right])
    {
        min_index=right;
        minvalue=tree[right];

    }
    if (i!=min_index)
    {
        swap(tree[i],tree[min_index]);
        adjust_min(tree,min_index,n);
    }

}

void deletetree(int tree[],int n)
{
    swap(tree[0],tree[n-1]);
    adjust_min(tree,0,n-1);
}

void heap_sort(int tree[],int n)
{
    while(n>1)
    {
        deletetree(tree,n);
        n--;
    }
}
