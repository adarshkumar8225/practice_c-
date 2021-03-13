
//Problem link__>>> https://www.geeksforgeeks.org/rearrange-array-alternating-positive-negative-items-o1-extra-space/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void fun(int arr[],int n)
{
    vector<int> neg;
    vector<int> pos;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=0) pos.push_back(arr[i]);
        else neg.push_back(arr[i]);
    }
    int j=0,k=0;
    for(int i=0;i<n;i++)
    {
        if(j==neg.size())
        {
            arr[i]=pos[k];
            k++;
        }
        else
        {
            if(i%2==0)
            {
                arr[i]=neg[j];
                j++;
            }
            else
            {
                arr[i]=pos[k];
                k++;
            }
        }
    }
}

int main()
{
    int arr[]={-5, -2, 5, 2, 4, 7, 1, 8, 0, -8};
    fun(arr,10);
    for(int i=0;i<10;i++) cout<<arr[i]<<"  ";
    return 0;
}
