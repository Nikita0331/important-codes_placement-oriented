#include<bits/stdc++.h>
using namespace std;
int fo(vector<int>& v,int n,int t)
{
    int l=0,h=n-1,o=-1;
    while(l<=h)
    {
        int m=l+(h-l)/2;
        if(v[m]==t)
        {
            if(m==0)
            return 0;
            else if(v[m-1]!=t)
            return m;
            else
            h=m-1;
        }
        else if(v[m]>t)
        {
            h=m-1;
        }
        else if(v[m]<t)
        {
            l=m+1;
        }
        else
        {
            return -1;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int t;
    cin>>t;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<fo(v,n,t);
}

