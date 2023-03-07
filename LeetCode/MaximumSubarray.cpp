class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int>pre_sum=nums;
        for(int i=1;i<nums.size();i++)
        {
            pre_sum[i]+=max(0,pre_sum[i-1]);
        }
        return *max_element(begin(pre_sum),end(pre_sum));
    }
};
