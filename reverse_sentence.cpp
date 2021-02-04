
// problem link:->> https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1#



string reverseWords(string S) 
{ 
    // code here 
    vector <string> v;
    int i;
    string word="";
    //loop for storing each word before the dot 
    for(char x: S)
    {
        // when a dot comes the store the word into a vector.
        if(x=='.')
        {
            v.push_back(word);
            word="";
        }
        else
        {
            word=word+x;
      
        }
    }
    v.push_back(word);
    S="";
    //read the vector from end and the add each word to the string S 
    for(i=v.size()-1;i>0;i--)
    {
        S=S+v[i]+'.';
    }
    S=S+v[0];
    // Finally return the string.
    return S;
    
    
} 
