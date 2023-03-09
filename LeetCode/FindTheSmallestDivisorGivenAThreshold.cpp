class Solution {
public:
    bool check(int mid,vector<int>&nums,int threshold)
    {
        int n=nums.size(),sum=0;
        for(int i=0;i<n;i++)
        {
            int val=0;
            if(mid>=nums[i])
            val=1;
            else
            val=ceil(double(nums[i])/double(mid));
            sum+=val;
        }
        return sum<=threshold;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1,high=*max_element(nums.begin(),nums.end()),ans=0;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(check(mid,nums,threshold))
            {
                ans=mid;
                high=mid-1;
            }
            else
            low=mid+1;
        }
        return ans;
    }
};
