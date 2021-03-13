
//Problem link__>>> https://www.geeksforgeeks.org/rearrange-array-alternating-positive-negative-items-o1-extra-space/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool desc(int a,int b)
{
    return a>b;
}
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void fun(int arr[],int n)
{
    sort(arr,arr+n,desc);//desc is the function defined above
    int index;
    for(int j=n-1;j>=0;j--)
    {
        if(arr[j]>=0) {index=j+1;break;}
    }
    for(int i=0,j=n-1;j>=index;i+=2,j--)
    {
        swap(arr[i],arr[j]);
    }
}

int main()
{
    int arr[]={-5, -2, 5, 2, 4, 7, 1, 8, 0, -8};
    fun(arr,10);
    for(int i=0;i<10;i++) cout<<arr[i]<<"  ";
    return 0;
}
