class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int,int>m;
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(nums[i]-1)==m.end())
            {
                int c=1;
                int j=nums[i];
                while(m.find(j+1)!=m.end())
               { c++;j++;
               }
               ans=max(ans,c);
            
            }


        }
        return ans;
    }
};