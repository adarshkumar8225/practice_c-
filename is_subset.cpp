// Check if one array is subset of other array in O(N).

//Problem Link-->> https://practice.geeksforgeeks.org/problems/array-subset-of-another-array2317/1#

string isSubset(int a1[], int a2[], int n, int m) {
    
    unordered_map<int,int> m1;
    for(int i=0;i<n;i++)
    {
        m1[a1[i]]++;
    }
    for(int i=0;i<m;i++)
    {
        if(m1[a2[i]]==0) return "No";
    }
    return "Yes";
}
