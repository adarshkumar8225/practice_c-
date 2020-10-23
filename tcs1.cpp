int main()
{
    int X=0,Y=0,n;
    int m=10;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        switch(i%5)
        {
            case 0: X=X+10*i;
                    break;
            case 1: X=X+10*i;
                    break;
            case 2:Y=Y+10*i;
                    break;
            case 3: X=X-10*i;
                    break;
            case 4: Y=Y-10*i;
                    break;
        }
    }
    cout<< X << " "<< Y; 

    retu
