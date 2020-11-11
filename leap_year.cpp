#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int y;
    cin>>y;
    if(y%400==0 || (y%4==0 && y%100!=0))
    {
        cout<<"12-9-"<<y;
        
    }
    else
    {
        cout<<"13-9-"<<y;
    }

    return 0;
}
