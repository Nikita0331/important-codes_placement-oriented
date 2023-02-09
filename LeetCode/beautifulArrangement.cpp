#include<bits/stdc++.h>
class Solution {
public:
 int c=0;
    void solve(vector<int> &v,int k)
    {
        if(k==v.size())  
        {
            c++;
            return;   
        } 
        for(int i=k;i<v.size();i++)
        {
            if((v[i]%(k+1))==0 || ((k+1)%v[i])==0)
            {
                swap(v[i],v[k]);
                 solve(v,k+1);
                swap(v[i],v[k]);
            }
        }
    }
    int countArrangement(int n) {
        vector<int> v(n);
        for(int i=0;i<n;i++)
            v[i]=i+1;
        solve(v,0);
        return c;
    }

};