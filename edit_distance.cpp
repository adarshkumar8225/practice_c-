
//Problem Link->>  https://practice.geeksforgeeks.org/problems/edit-distance3702/1

int editDistance(string s, string t) {
        // Code here
        int dp[s.length()+1][t.length()+1];
        
        for(int i=0;i<=s.length();i++)
        {
            for(int j=0;j<=t.length();j++)
            {
                if(i==0) dp[i][j]=j;
                else if(j==0) dp[i][j]=i;
                else
                {
                    if(s[i-1]==t[j-1]) dp[i][j]=dp[i-1][j-1];
                    else
                    {
                        dp[i][j]=min({dp[i][j-1],dp[i-1][j],dp[i-1][j-1]})+1;
                    }
                }
            }
        }

        return dp[s.length()][t.length()];
    }
