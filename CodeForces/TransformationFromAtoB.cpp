
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    vector<int>res;
    while(a<b)
    {  
    res.push_back(b);
    //res.push_back(a);
    if(b%2==0)
    {
        b=b/2;
        //check(a,b/2,v);
    }
    else if(b%10==1)
    {
        b=b/10;
    }
    else
    {
        
    break;
    
    }
    //res.push_back(a);
    }
     if(a==b)
    {
        cout<<"YES"<<endl;
        
        res.push_back(a);
        reverse(res.begin(),res.end());
        cout<<res.size()<<endl;
        for(int i=0;i<res.size();i++)
       { cout<<res[i]<<" ";}
    }
 else
    cout<<"NO"<<endl;

    return 0;
}
