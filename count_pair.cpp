
//Problem Link->>>>>>>>>>> https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1#


  int getPairsCount(int arr[], int n, int k) {
        // code here
        int count=0;
        unordered_map<int,int> m;
        //map is used to count the occurance of each digit.......
        for(int i=0;i<n;i++)
        {
            m[arr[i]]++;
        }
        //for ith element arr[i] if there is any (k-arr[i]) element then
        //increment the count by adding frequency of that element
        for(int i=0;i<n;i++)
        {
            //cout<<m[arr[i]]<<" ";
            count=count+m[k-arr[i]];
        }
        //some elements form pair with itself (2,2) so decrement that count
        for(int i=0;i<n;i++)
        {
            if(arr[i]==k-arr[i]) count--;
        }
        //since each pair is counted twice so return the half count as value.
        return count/2;
    }
