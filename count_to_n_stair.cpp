    int count=0;
    int DP[10000];
    int count_ways(int i,int n)
    {
        if(i==n) 
        {
            //count+=1;
            return 1;
        }
        else if(i>n) return 0;
        return count_ways(i+1,n)+
        count_ways(i+2,n);
    }
    
    
    //Function to count number of ways to reach the nth stair.
    int countWays(int n)
    {
        return count_ways(0,n)%1000000007;
    }
