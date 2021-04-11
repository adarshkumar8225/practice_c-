//Problem Link-->> https://www.geeksforgeeks.org/split-the-binary-string-into-substrings-with-equal-number-of-0s-and-1s/
//Split the binary string into substrings such that each substr has equal 0s and 1s.



#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void bin_substr(string str)
{
    vector<string> v;
    string s="";
    char c=str[0];
    int flag=0,count=0;
    for(int i=0;i<str.size();i++)
    {
        if(c==str[i])
        {
          //Keep on counting the starting chars
            if(flag==0)
            {
                count++;
                s=s+str[i];
            }
          //Now keep adding equal no. of opposite chars
            else
            {
                s=s+str[i];
                count--;
              //once count=0 store the substring in vector and again be ready for counting
                if(count==0) 
                {
                    flag=0;
                    v.push_back(s);
                    s="";
                    if(i<str.size()-1) c=str[i+1]; 
                }
            }
        }
      //when not equal it means now we need to decrement the counter
        else
        {
            c=str[i];
            i--;
            flag=1;
        }
    }
    if(count!=0) cout<<-1;
    else 
    {
        for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    }
}


int main()
{
    string str;
    cin>>str;
    bin_substr(str);
}
