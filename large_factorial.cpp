
// Factorial of large number upto 1000
//Problem Link-->>> https://practice.geeksforgeeks.org/problems/factorials-of-large-numbers2508/1#


#include <iostream>
#include<bits/stdc++.h>

using namespace std;


    vector<int> multiply(vector<int> v1,vector<int> v2)
    {
        vector<vector<int> > result;
        int i=v2.size()-1;
        int carry,k,val;
        while(i>=0)
        {
            k=0;
            carry=0;
            for(int j=v1.size()-1;j>=0;j--)
            {
                val=v1[j]*v2[i];
                val=val+carry;
                if(val<10){ result[k].push_back(val);carry=0;}
                else
                {
                    
                    result[k].push_back(val%10);
                    val=val/10;
                    carry=val%10;
                    if(j==0) result[k].push_back(carry);
                }
            }
           
            reverse(result[k].begin(),result[k].end());
            int zeroes=k;
            while(zeroes)
            {
                result[k].push_back(0);
                zeroes--;
            }
            i--;
            k++;
        }
        int n=result[k-1].size();
        for(int m=0;m<k-1;m++)
        {
            int x=n-result[m].size();
            while(x)
            {
                result[m].insert(result[m].begin(),0);
                x--;
            }
        }
        vector<int > output;
        for(int m=result[0].size()-1;m>=0;m--)
        {
            carry=0;
            val=0;
            for(int p=0;p<result.size();p++)
            {
                 val=result[p][m]+val;
            }
            val=val+carry;
            if(val<10) output.push_back(val);
            else
            {
                output.push_back(val%10);
                val=val/10;
                carry=val%10;
                if(m==0) output.push_back(carry);
            }
        }
        reverse(output.begin(),output.end());
        return output;
    }
    vector<int> digit_store(int n)
    {
        vector<int> v;
        while(n)
        {
            v.push_back(n%10);
            n=n/10;
        }
        reverse(v.begin(),v.end());
        return v;
    }
    
    vector<int> factorial(int N)
    {
        // code here
        vector<int> v,v1,result;
        v=digit_store(N);
        //digit_store(v1,N-1);
        while(N>1)
        {
            v1=digit_store(N-1);
            result=multiply(v,v1);
            v.clear();
            v=result;
            v1.clear();
            N--;
        }
        return result;
    }




int main()
{
    int N;
    cin>>N;
    vector<int> v=factorial(N);
    for(int i=0;i<v.size();i++) cout<<v[i];
    return 0;
}
