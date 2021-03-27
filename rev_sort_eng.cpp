// Codejam Problem Statement 3 2021.

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void Reverse(int arr[],int start,int end)
{
    //int mid=(start+end)/2;
    for(int i=start,j=end;i<=j;i++,j--)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}

int position(int arr[],int start,int end)
{
    int min=arr[start];
    int index=start;
    for(int i=start+1;i<=end;i++)
    {
        if(arr[i]<min) 
        {
            min=arr[i];
            index=i;
        }
    }
    return index;
}

int Reverse_sort(int arr[],int n)
{
    int j,count=0;
    for(int i=0;i<n-1;i++)
    {
        j=position(arr,i,n-1);
        Reverse(arr,i,j);
        count=count+j-i+1;
    }
    return count;
}

bool permute(int a[], int l, int r,int cost,bool val,int n)
{
    // Base case
    if (l == r)
    {
        if(cost==Reverse_sort(a,n))  
        return 1;
        else return 0;
    }
    else
    {

        for (int i = l; i <= r; i++)
        {
            swap(a[l], a[i]);
            val= val || permute(a, l+1, r,cost,val,n);
            swap(a[l], a[i]);
        }
    }
    return val;
}


int main()
{
    int t;
    cin>>t;
    int m=1;
    while(m<=t)
    {
        int n,cost;
        cin>>n>>cost;
        int arr[n];
        for(int i=0;i<n;i++) arr[i]=i+1;
       
            if(permute(arr,0,n-1,cost,0,n))
            {
                cout<<"Case #"<<m<<":"<<" ";
                for(int i=0;i<n;i++) cout<<arr[i]<<" ";
                cout<<endl;
            }
           
            else 
            {
                cout<<"Case #"<<m<<":"<<" "<<"IMPOSSIBLE";
                cout<<endl;
            }
       
        m++;
    }
}
