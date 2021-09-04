#include <iostream>
#include <bits/stdc++.h>

using namespace std;

string lcs(string s1, string s2)
{
    
    // your code here
    int x=s1.size();
    int y=s2.size();
   int dp[x+1][y+1],i,j;
   // 
   for(i=0;i<=x;i++)
   {
       for(j=0;j<=y;j++)
       {
           //if either i=0 or j=0 make it 0
           if(i==0 || j==0) dp[i][j]=0;
           //if match found just add 1 to the dignol value
           else if(s1[i-1]==s2[j-1])
           {
               dp[i][j]=dp[i-1][j-1]+1;
           }
           //no match just take max of its top and left neighbour.
           else
           dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
       }
   }
   //return the last value as answer
   //Now try to print the whole longest common Subsequence
   string str="";
   i=x;
   j=y;
   while(!(i==0 || j==0))
   {
       if(s1[i-1]==s2[j-1])
       {
           str=str+s1[i-1];
           i--;
           j--;
       }
       else
       {
           if(dp[i-1][j]>dp[i][j-1]) i--;
           else j--;
       }
   }
   reverse(str.begin(),str.end());
   //return dp[x][y];
   return str;
}


int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       string s1,s2;
       cin>>s1>>s2;
       cout<<lcs(s1,s2)<<endl;
   }

    return 0;
}
