#include <bits/stdc++.h> 
vector<int>reverse (vector<int>v)
{
    int s=0,e=v.size()-1;
    while(s<e)
        swap(v[s++],v[e--]);
    return v;
}
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.
    int i=n-1;
    int j=m-1;
    int sum=0;
    int carry=0;
    vector<int> res;
    while(i>=0&&j>=0)
    {
        int v1=a[i];
        int v2=b[j];
        sum=v1+v2+carry;
        carry=sum/10;
        sum=sum%10;
        res.push_back(sum);
        i--;
        j--;
    }
    while(i>=0)
    {
        sum=a[i]+carry;
        carry=sum/10;
        sum=sum%10;
        res.push_back(sum);
        i--;
    }
    while(j>=0)
    {
        sum=b[j]+carry;
        carry=sum/10;
        sum=sum%10;
        res.push_back(sum);
        j--;
    }
    while(carry!=0)
    {
        sum=carry;
        carry=sum/10;
        sum=sum%10;
        res.push_back(sum);
    }
    return reverse(res);
    
}