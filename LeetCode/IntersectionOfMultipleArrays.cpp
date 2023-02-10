class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
       map<int,int>mp;
       vector<int>v;
       int n=nums.size();
       //int row=n,col=nums[0].size();
       for(int row=0;row<n;row++)
        {
            for(int col=0;col<nums[row].size();col++)
            {
                mp[nums[row][col]]++;
            }
        }
       for(auto x:mp)
       {
           if(x.second==n)
           v.push_back(x.first);
       }
       return v;
    }
};