//bitwise and operator used between number and 1.
//if returns 1 then odd else even.

#include <iostream>
using namespace std;
int main(int argc , char *argv[])
{
    int n;
    for(int i=1;i<3;i++)
    {
        n=atoi(argv[i]);
        if(n & 1) cout<<"odd"<<endl;
        else cout<<"even"<<endl;
    }
    return 0;
}
