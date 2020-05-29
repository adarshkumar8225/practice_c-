#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef vector< vector<int> > Matrix;//2d variable size array using vector
 vector<int> Row;

 // the dimension of the matrix
Matrix matrix;
int main() {
    int n,q,x;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    cin>>n;
    cin>>q;
    int i,element,a,b,j;
    for(i=0;i<n;i++)
    {
        
        cin>>element;
       
        for(j=0;j<element;j++)
        {
            cin>>x;
            Row.push_back(x);//pushing element of each row. 
        }
        matrix.push_back(Row);//push complete row in matrix.
        Row.clear();//now clear the row so that it can store element of next row.
    }
    for(i=0;i<q;i++)
    {
        cin>>a>>b;
        cout<<matrix[a][b]<<"\n";
    }
    return 0;
}
