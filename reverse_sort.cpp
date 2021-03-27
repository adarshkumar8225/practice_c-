// Codejam Contest 2021

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void Reverse(int arr[],int start,int end)
{
    
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


int main()
{
    int t;
    cin>>t;
    int m=1;
    while(m<=t)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int count=Reverse_sort(arr,n);
        cout<<"Case #"<<m<<":"<<" "<<count<<endl;
        m++;
    }
}
