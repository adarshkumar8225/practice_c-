
#include <iostream>
using namespace std;

int factorial(int n)
{
    if(n==0) return 1;
    else return(n*factorial(n-1));
}
int main(int argc, char *argv[])
{
    int n;
    n=atoi(argv[1]);
    cout<<factorial(n);
    return 0;
}
