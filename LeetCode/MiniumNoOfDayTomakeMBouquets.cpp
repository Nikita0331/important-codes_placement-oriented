class Solution {
public:
    bool check(int mid,vector<int>&bloomDay,int m,int k)
    {
        int n=bloomDay.size(),cur=0,adj=0;
        for(int i=0;i<n;i++)
        {
            if(bloomDay[i]>mid)
            adj=0;
            else
            {
                adj++;
                if(adj==k)
                {
                    adj=0;
                    cur+=1;
                }
            }
            if(cur>=m)
            return true;
        }
        return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
       int n=bloomDay.size();
    //    if(n<m*k)
    //    return -1;
       int low=*min_element(bloomDay.begin(),bloomDay.end()),high=*max_element(bloomDay.begin(),bloomDay.end()),res=-1;
       while(low<=high)
       {
           int mid=low+(high-low)/2;
           if(check(mid,bloomDay,m,k))
           {
               res=mid;
               high=mid-1;
           }
           else
           low=mid+1;
       }
       return res; 
    }
};
