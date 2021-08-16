#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int min_swap(vector<int> &v)
{
    pair<int,int> arr[v.size()];
    for(int i=0;i<v.size();i++)
    {
        arr[i].first=v[i];
        arr[i].second=i;
    }
    sort(arr,arr+v.size());
    vector<bool> visited(v.size(),0);
    int result=0;
    for(int i=0;i<v.size();i++)
    {
        int old_position=arr[i].second;
        if(visited[i]==1 || old_position==i ) continue;
        else
        {
            int j=i;
            int cycle=0;
            while(!visited[j])
            {
                visited[j]=1;
                j=arr[j].second;
                cycle++;
            }
            result=result+(cycle-1);
        }
    }
    return result;
}


int main()
{
    vector<int> v;
    int N,a;
    cin>>N;
    for(int i=0;i<N;i++) 
    {
        cin>>a;
        v.push_back(a);
    }
    cout<<min_swap(v);
    return 0;
}
