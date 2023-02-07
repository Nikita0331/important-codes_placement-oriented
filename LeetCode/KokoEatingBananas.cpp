class Solution {
public:
bool iseat(int n,int h,int m,vector<int> &piles)
{
    int c=0;
    for(int i=0;i<n;i++)
    {
        c+=(piles[i]/m)+(piles[i]%m!=0);
        if(c>h)
        return false;
    }
    return true;
}
    int minEatingSpeed(vector<int>& piles, int h) {
       int s=1,e=*max_element(piles.begin(),piles.end()),res=0;
       while(s<=e)
       {
           int m=s+(e-s)/2;
           if(iseat(piles.size(),h,m,piles))
           {
               res=m;
               e=m-1;
           }
           else
           s=m+1;
       } 
       return s;
    }
};