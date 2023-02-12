#include <algorithm>
#include <iostream>
#include <vector>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
// 
ll int vis(vector<ll int>& arr, ll int n) {
  unordered_map<ll int, ll int> mp;
    //int maxFreq = 0;
    for (int i = 0; i < n; i++) 
    mp[arr[i]]++;
	int max_count = 0, res = -1; 
    for (auto i : mp) { 
    if (max_count < i.second) { 
        res = i.first; 
        max_count = i.second; 
    }  
}
return max_count;
}

int main() {
	// Your code goes here;
	 ll int n;
	cin>>n;
	vector<ll int> b;
	for(ll int i=0;i<n;i++)
	{
		 ll int x;
		cin>>x;
		b.push_back(x);
	}
	//vis(b,n);
	cout<<vis(b,n)<<endl;
	return 0;
}