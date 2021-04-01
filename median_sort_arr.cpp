//Find median of two sorted array


#include <iostream>

using namespace std;
int median(int arr1[],int arr2[],int n, int m)
{
    int arr[m+n];
    int i=0,j=0,k=0;
    for(k=0;k<m+n;k++)
    {
        if(i>=n)
        {
            arr[k]=arr2[j++];
        }
        else if(j>=m)
        {
            arr[k]=arr1[i++];
        }
        else
        {
           if(arr1[i]<arr2[j])
           {
               arr[k]=arr1[i++];
           }
           else arr[k]=arr2[j++];
        }
    }
    if((m+n)%2) return(arr[(m+n)/2]);
    else return(arr[(m+n)/2]+arr[(m+n)/2-1])/2;
}


int main()
{
    int n;
    cin>>n;
    int arr1[n];
    for(int i=0;i<n;i++) cin>>arr1[i];
    int m;
    cin>>m;
    int arr2[m];
    for(int i=0;i<m;i++) cin>>arr2[i];
    
    cout<<median(arr1,arr2,n,m);
    

    return 0;
}
