class Solution {
public:
     void solve(vector<int> nums, vector<int> temp, int ind, vector<vector<int>> &res)
    {
        if (ind>nums.size() - 1)
        {
            res.push_back(temp);
            return ;
        }
        solve(nums, temp, ind + 1, res) ;
        int ele = nums[ind];
        temp.push_back(ele);
        solve(nums, temp, ind + 1 , res);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res ; 
        vector<int> temp ;
        int ind = 0 ; 
        solve (nums, temp, ind, res) ;
        return res ;  
    }
};
 