   string even_palin(string S)
    {
        int max=0;
        int i,j,k,l,start,end,flag;
        for(i=0,j=1;j<S.size();i++,j++)
        {
            k=i;
            l=j;
            flag=0;
            while(k>=0 && l<S.size())
            {
                if(S[k]==S[l])
                {
                    k--;
                    l++;
                }
                else
                {
                    if((l-k)> max)
                    {
                        max=l-k;
                        start=k+1;
                        end=l-1;
                        flag=1;
                    }
                    break;
                }
            }
            if(flag==0 && (l-k)>max)
            {
                start=k+1;
                end=l-1;
            }
        }
        return S.substr(start,end-start+1);
    }
    
    string odd_palin(string S)
    {
        int max=0;
        int i,j,k,start,end,flag;
        for(i=1;i<S.size()-1;i++)
        {
            j=i-1;
            k=i+1;
            flag=0;
            while(j>=0 && k<S.size())
            {
                if(S[j]==S[k])
                {
                    j--;
                    k++;
                }
                else
                {
                     flag=1;
                    j++;
                    k--;
                    if((k-j)> max)
                    {
                        max=k-j;
                        start=j;
                        end=k;
                       
                    }
                    break;
                }
            }
             if(flag==0)
            {
                k--;
                j++;
                if((k-j)>max)
                {
                    max=k-j;
                    start=j;
                    end=k;
                }
            }
                
        }
        if (max==0) return S.substr(0,1);
        else return S.substr(start,end-start+1);
    }
    
    string longestPalin (string S)
    {
        // code here
        string str1=even_palin(S);
        string str2=odd_palin(S);
        if(str1.size()>str2.size()) return str1;
        else return str2;
        

    }
