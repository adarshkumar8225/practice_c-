//Problem Link---->> https://practice.geeksforgeeks.org/problems/minimum-swaps-required-to-bring-all-elements-less-than-or-equal-to-k-together4847/1#
//Minimum swap required to bring all elements less than equal to k together in an array.


// Count no. of elements greater than k in the window of array from i to j.
int func(int arr[],int i,int j,int k)
{
    int count=0;
    for(int m=i;m<=j;m++)
    {
        if(arr[m]>k) count++;
    }
    return count;
}

int minSwap(int *arr, int n, int k) {
    // Complete the function
    int count=0;
  //Count no. of elemnts less than equal to k in the array.
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=k) count++;
    }
    int min=count,g;
  //For each window find the no. of elements greater than k.
    for(int i=0,j=count-1;j<n;i++,j++)
    {
        if(i==0)
         g=func(arr,i,j,k);
        else
        {
            if(arr[i-1]<=k && arr[j]>k) g=g+1;
            else if(arr[i-1]>k && arr[j]<=k) g=g-1;
        }
      // min value of g is the required answer
        if(g<min) min=g;
       
    }
    return min;
}
