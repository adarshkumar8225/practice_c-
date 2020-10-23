//in first string replace vowels with *
//In second string replace consonants with @
// In third string convert it to upper case
//concatenate all the string to give output

#include <iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
    string str1,str2,str3;
    int i,flag=0;
    char Vowels[]={'a','e','i','o','u'};
    cin>>str1;
    cin>>str2;
    cin>>str3;
    for(i=0;i<str1.size();i++)
    {
        for(int j=0;j<5;j++)
        {
            if(str1[i]==Vowels[j]) {
                str1[i]='*';
                break;
            }
        }
        
    }
    for(i=0;i<str2.size();i++)
    {
        for(int j=0;j<5;j++)
        {
            if(str2[i]!=Vowels[j]) flag=0;
            else
            {
                flag=1;
                break;
            }
            
            
        }
        if(flag==0) str2[i]='@';
        
    }
    for(i=0;i<str3.size();i++)
    {
       str3[i]= toupper(str3[i]);

        
    }
    cout<<str1<<str2<<str3;

    return 0;
}
