class Solution {
public:
int count(vector<int>&citations,int m)
{
    int c=0;
    for(auto x:citations)
    {
        if(x>=m)
        c++;
    }
    return c;
}
    int hIndex(vector<int>& citations) {
        int l=1,n=citations.size(),h=n;
        int res=0;
        while(l<=h)
        {
            int m=l+(h-l)/2;
            int a=count(citations,m);
            if(a>=m)
            {
                res=m;
                l=m+1;
            }
            else
            h=m-1;
        }
        return res;
    }
};