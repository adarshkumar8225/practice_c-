

//Problem Link-->>> https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1#

long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    sort(a.begin(),a.end());
    long long min=a[m-1]-a[0];
    for(long long i=0,j=m-1;j<a.size();j++,i++)
    {
        if(a[j]-a[i]<min) min=a[j]-a[i];
    }
    return min;
}
