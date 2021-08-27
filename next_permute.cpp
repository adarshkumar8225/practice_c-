//Problem LInk-> https://practice.geeksforgeeks.org/problems/next-permutation5226/1#    

vector<int> nextPermutation(int N, vector<int> arr){
        // code here
        int i;
        for(i=N-2;i>=0;i--)
        {
            if(arr[i]<arr[i+1])
            {
                break;
            }
        }
        //This happens when max permutation is given as input
        //In that case we have to return min possible permutation.
        if(i==-1) 
        {
            reverse(arr.begin(),arr.end());
            
        }
        else
        {
            
            sort(arr.begin()+i+1,arr.end());
            int j=i+1;
            while(j<N)
            {
                if(arr[j]>arr[i])
                {
                   int temp=arr[i];
                   arr[i]=arr[j];
                   arr[j]=temp; 
                   break;
                }
                j++;
            }
            
        }
        return arr;
    }
