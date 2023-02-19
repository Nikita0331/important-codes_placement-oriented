class Solution {
public:
    int rob(vector<int>& nums) {
     int rob=0,unrob=0;
        for(int i=0;i<nums.size();i++)
        {
            int nrob,nunrob;
            nrob=unrob+nums[i];
            nunrob=max(unrob,rob);
            rob=nrob;
            unrob=nunrob;
        }
        return max(rob,unrob);
    }
};
