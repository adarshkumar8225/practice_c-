//counting rocksalt problem codevita 2020.from geekforgrrks


#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    int range[5][2];
    int x,n,i,count1=0,count2=0,count3=0;
    
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
        
    }
    for(i=0;i<3;i++)
    {
        cin>>range[i][0]>>range[i][1];
    }
    for(i=0;i<n;i++)
    {
        if(range[0][0]<=v[i]&& v[i]<=range[0][1]) count1++;
        else if(range[1][0]<=v[i]&& v[i]<=range[1][1]) count2++;
        else if(range[2][0]<=v[i]&& v[i]<=range[2][1]) count3++;
    }
    cout<<count1<<" "<<count2<<" "<<count3;
    
}
