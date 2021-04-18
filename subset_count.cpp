// Problem Statement--> For a given array "A" find the number of subset whose sum is equal to given "Sum"



#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int subset_count(int arr[],int sum,int i, int n)
{
    static int count;
    //when reach at the end of list now check if sum==0 then count++
    //Otherwise count is not updated................................
    if(i==n) 
    {
        if(sum==0) count++;
        return count;
    }
    //Recursive call for generating all subset_count
    //For each element we have two option either it is included in the subset
    //or it is not included in the subset
    subset_count(arr,sum,i+1,n);
    subset_count(arr,sum-arr[i],i+1,n);
    
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int sum;
    cin>>sum;
    cout<<subset_count(arr,sum,0,n);
    
}
