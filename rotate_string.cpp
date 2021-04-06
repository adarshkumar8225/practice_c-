//Problem Link--> https://www.geeksforgeeks.org/a-program-to-check-if-strings-are-rotations-of-each-other/

// Can we obtain str2 by rotating str1.........
//Soln-->> concatenate temp=str1+str1 , Now check if str2 is substring of temp

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isRotation(string str1,string str2)
{
    //concatenate str1+str1 
    string temp=str1+str1;
    //Now check whether str2 is substring of string temp.............
    for(int i=0,j=0; i<temp.size();i++)
    {
        if(temp[i]==str2[j])
        {
            j++;
        }
        if(j==str2.size()) return 1;
    }
    return 0;
}

int main()
{
    string str1,str2;
    cin>>str1>>str2;
    cout<<isRotation(str1,str2);
    
}
