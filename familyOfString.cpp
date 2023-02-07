//family of string 
//given int k & i
//find sk and then compute sk[i]
//constraint to find string convert 0 to 01 & 1 to 10
#include<bits/stdc++.h>
using namespace std;

string solve(int l,int h,int i,string s)
{
    if(l==h)
    return s;
    int m=l+(h-l)/2;
    if(i<=m)
    return solve(l,m,i,s);
    else
    return solve(m+1,h,i,to_string(1-stoi(s)));
}
int main()
{
   int n;
   cin>>n;
   int i;
   cin>>i;
   string res=solve(1,n,i,"0");
   cout<<res;
    
}
 