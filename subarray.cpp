#include <iostream> 
# include <vector> 
using namespace std; 
  
// Recursive function to print all possible subarrays   
// for given array  
int count=0;
void printSubArrays(vector<int> arr, int start, int end,int p,int q) 
{       
    // Stop if we have reached the end of the array      
    if (end == arr.size())  
        return ; 
        
    // Increment the end point and start from 0  
    else if (start > end)  
        printSubArrays(arr, 0, end + 1,p,q); 
            
    // Print the subarray and increment the starting point  
    else
    { 
        int sum=0,j=0;
        for (int i = start; i < end; i++){ 
            sum=sum+arr[i]; 
            j=j+1;
        } 
          
        if(sum==q && j!=p)  count++;
        printSubArrays(arr, start + 1, end,p,q); 
    } 
      
    return ; 
} 
  
int main() 
{ 
    int N,p,q,x;
    cin>>N>>p>>q;
    vector<int> arr ;
    for(int i=0;i<N;i++)
    {
        cin>>x;
        arr.push_back(x);
        
    }
   
   printSubArrays(arr, 0, 0,p,q); 
   cout<<(count+1);
   return 0; 
} 
