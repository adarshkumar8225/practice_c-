// Problem Link--> https://practice.geeksforgeeks.org/problems/three-way-partitioning/1#

// Partition the array which contains elements less than a at starting, within [a,b] in the middle and greater than b at the end.

 //Function to partition the array around the range such 
    //that array is divided into three parts.
    void threeWayPartition(vector<int>& array,int a, int b)
    {
        // code here 
        int j=0,k;
        //Brings all elements less than a at the starting locations of array.
        for(int i=0;i<array.size();i++)
        {
            if(array[i]<a)
            {
                int temp=array[i];
                array[i]=array[j];
                array[j]=temp;
                j++;
                
            }
          
        }
        k=j;
        //Brings elements in range [a,b] in the middle of array 
        // thus elements greater than b will come at end.
         for(int i=k;i<array.size();i++)
        {
           
           if(array[i]<=b)
            {
                int temp=array[i];
                array[i]=array[j];
                array[j]=temp;
                j++;
                
            }
        }
        
    }
