
//Problem Statement--->> https://practice.geeksforgeeks.org/problems/sum-of-all-substrings-of-a-number-1587115621/1#
//Sum of all substring of a given string. using Dynamic Programming approach

long long sumSubstrings(string s){
        
        // your code here
        long long v=1000000007;
        long long dp[s.size()];
        long long sum;
        dp[0]=(s[0]-'0');
        sum=dp[0];
        for(int i=1;i<s.size();i++)
        {
            dp[i]=((i+1)*(s[i]-'0'))%v+(10*dp[i-1])%v;
            sum=(sum+dp[i])%v;
        }
        return (sum%(v));
    }
