
//sequence: 1 1 2 3 4 9 8 27 16 81 ......
//print the nth term of the sequence
#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int n,i;
    int f=0;
    int g=0;
    cin>>n;
    if(n%2)
    {
        f=pow(2,n/2);
        cout<<f<<endl;
    }
    else
    {
        f=pow(3,n/2-1);
        cout<<f<<endl;
    }
    return 0;
}
