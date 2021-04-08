//Problem Link--> https://leetcode.com/problems/count-and-say/submissions/


    string countAndSay(int n) 
    {
        string s="1";
        if(n==1) return s;// when n==1 return string s="1"
        string str1=countAndSay(n-1);//Recursive Call return the string
        //Now count the number of different digits
         string str="";
         char c=str1[0];
         int count=0;
           for(int i=0;i<str1.size();i++) 
           {
               if(c==str1[i]) count++;
               else
               {
                   str=str+to_string(count)+c;
                   c=str1[i];
                   count=0;
                   i--;
               }
           }
         str=str+to_string(count)+c;
        return str;
        
    }
