#include<bits/stdc++.h>
class Solution {
public:
     int findMin(vector<int>& nums) 
    {
        int s=0,e=nums.size()-1,ans=nums[0];
        if(nums[0]<=nums[e])
        {
            return nums[0];
        }
        while(s<=e)
        {
       int m=s+(e-s)/2;
       if(nums[m]<=nums[e])
       {
          ans=min(ans,nums[m]);
          e=m-1;
       }
       else if(nums[m]>nums[e])
       {
           if((m<e)&&(nums[m+1]<=nums[m]))
           return nums[m+1];
           else
           s=m+1;
       }
        }
           return ans;
    }
};
