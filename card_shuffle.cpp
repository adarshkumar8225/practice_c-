#include<iostream>
#include<vector>
using namespace std;

int v[100];
//operation to be performed on the cards.
void operation(int pile)
{
    int value[100/pile][pile];
    int k=0,i,j;
    for(i=0;i<(100/pile);i++)
    {
        for(j=0;j<pile;j++)
        {
            value[i][j]=v[k];
             k++;
        }
    }
    k=0;
    for(j=0;j<pile;j++)
    {
        for(i=0;i<100/pile;i++)
        {
            v[k]=value[i][j];
            k++;
        }
    }
    
}

int main()
{
   //pile keeps the number of piles in different round.
    vector<int> pile;
    int N,m,x;//m= number of round,N =output nth element finally.
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>x;
        pile.push_back(x);
    }
    cin>>N;
    //initialize the global array with 1,2,3,4,5.......
    for(int i=0;i<100;i++)
    v[i]=i+1;
    //m round of operation of shuffleing is performed...
    for(int i=0;i<m;i++)
    {
        x=pile[i];
        operation(x);//function calll
    }
    cout<<v[N-1];//print the value after all operation at Nth position.
    
}
