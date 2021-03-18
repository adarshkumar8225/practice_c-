
//Problem Link--->> https://practice.geeksforgeeks.org/problems/longest-consecutive-subsequence2449/1#

int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      sort(arr,arr+N);
      int val=arr[0];
      int max=1,count=1;
      for(int i=1;i<N;i++)
      {
          if(arr[i]==val) continue;
          if(arr[i]-val==1)
          {
              count++;
              val=arr[i];
          }
          else
          {
              val=arr[i];
              if(count>max) max=count;
              count=1;
          }
      }
      if(count>max) max=count;
      return max;
    }
