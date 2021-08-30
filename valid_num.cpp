bool space(string B)
{
    int flag;
    for(int i=0;i<B.size();i++)
    {
        
        if(B[i]==' ')
        {
            for(int j=i,k=i;j>=0 && k<B.size() ;j--,k++) if(B[j]!=' ' && B[k]!=' ') return 0; 
            return 1;
        }
    }
    return 1;
}

bool dash(string B)
{
    for(int i=0;i<B.size();i++)
    {
        if(B[i]=='-')
        {
            if(i==0) return 1;
            else if(B[i-1]=='e') return 1;
            else return 0;
        }
    }  
    return 1;  
}

bool digit_after_dot(string B)
{
    int count=0;
    for(char s : B)
    {
        //if(s=='.') return 0;
        if(s=='.') break;
        count++;
    }
    if(count!= B.size())
    {
        char s=B[count+1];
        if(s=='0'||s=='1'||s=='2'||s=='3'||s=='4'||s=='5'||s=='6'||s=='7'||s=='8'||s=='9') return 1;
        else return 0;
    }
    else if(count==B.size()) return 1;
    else 
    return 0;
}

bool no_dot_after_e(string B)
{
    int flag=0,count=0;
    for(char s: B)
    {
        if(s=='e' && count==0) return 0;
        else if(s=='e') flag=1;
        if(flag && s=='.') return 0;
        count++;

    }
    
    return 1;
}


bool only_space(string B)
{
    for(char s: B)
    {
        if(s==' ')
        continue;
        else return 0;
    }
    return 1;
}

bool only_digit(string B)
{
    for(char s: B)
    {
        if(s=='0'||s=='1'||s=='2'||s=='3'||s=='4'||s=='5'||s=='6'||s=='7'||s=='8'||s=='9')
        continue;
        else return 0;
    }
    return 1;
}

int Solution::isNumber(const string A) {
    //char *str=A;
    if(A=="") return 0;
    if(only_space(A)) return 0;
    if(only_digit(A)) return 1;
    for(char s: A)
    {
        if(s=='0'||s=='1'||s=='2'||s=='3'||s=='4'||s=='5'||s=='6'||s=='7'||s=='8'||s=='9'||s=='-'||
        s=='.'||s=='e'|| s==' ')
        continue;
        else return 0;
    }

    return (no_dot_after_e(A) && digit_after_dot(A)&& dash(A)&& space(A));
}
