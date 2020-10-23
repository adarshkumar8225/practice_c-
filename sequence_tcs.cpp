// sequence: 0 0 2 1 4 2 6 3 8 4 10 5 12 6 14 7.........
// print nth element of the sequence.
#include <iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

     if(n%2)
    {
        cout<<(n/2)*2;
    }
    else
    {
        cout<<((n-1)/2);
    }
  
    return 0;
}
