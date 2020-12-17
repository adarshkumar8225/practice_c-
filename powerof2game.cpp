#include <iostream> 
# include <vector> 
#include<bits/stdc++.h>
using namespace std; 
 
 
bool isPowerOfTwo(int n)
{
   if(n==0)
   return false;
 
   return (ceil(log2(n)) == floor(log2(n)));
}

int main() 
{ 
   int t;
   cin>>t;
   while(t--)
   {
       long int num;
       //flag=0 means A else B
       int flag=0,v;
       cin>>num;
       while(num!=1)
       {
           if(flag==0)
           {
               isPowerOfTwo(num)? v=1:v=0;
               if(v==1)
           }
           
       }
   }
   return 0; 
} 
