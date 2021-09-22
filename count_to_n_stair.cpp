    
     int DP[10000];
//Recursive function to return the result............
    int count_ways(int i,int n)
    {
        if(i==n) 
        {
            
            return 1;
        }
        else if(i>n) return 0;
        if(DP[i]!=-1) return DP[i];
        //we can take step of 1 stair or 2 stair.............
        DP[i]=count_ways(i+1,n)%1000000007+
        count_ways(i+2,n)%1000000007;
        return DP[i];
    }
    
    
    //Function to count number of ways to reach the nth stair.
    int countWays(int n)
    {
        for(int i=0;i<10000;i++) DP[i]=-1;
        return count_ways(0,n)%1000000007;
    }
