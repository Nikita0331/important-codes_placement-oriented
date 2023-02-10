#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
// 
long long int solve(vector<long long int> &m,long long int mid)
{
	long long int sum=0;
	for(long long int i=0;i<m.size();i++)
	{
		sum+=(mid/m[i]);
	}
	return sum;
}
int main() {
	// Your code goes here;
	long long int n,t;
	cin>>n>>t;
	vector<long long int>m;
	for(int i=0;i<n;i++)
	{
		int x;cin>>x;
		m.push_back(x);
	}
	long long int l=*min_element(m.begin(),m.end()),h=l*t,mid,ans=0,no;
	
	while(l<=h)
	{
		mid=l+(h-l)/2;
		no=solve(m,mid);
		if(no<t)
		{
			l=mid+1;
		}
		else
		{
			ans=mid;
			h=mid-1;
		}
	}
    cout<<ans;
	return 0;
}