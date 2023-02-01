#include <bits/stdc++.h> 
int modularExponentiation(int x, int n, int m) {
	// Write your code here.
    int ans=1;
    while(n>0)
    {
        if(n&1)//odd
        {
            ans=(1ll*ans*(x)%m)%m;
        }
        x=(1ll*(x)%m*(x)%m)%m;
        n=n>>1;
    }
    return ans;
    
}