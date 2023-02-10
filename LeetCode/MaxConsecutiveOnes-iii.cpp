class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
         int n = nums.size(), len = 0, c = 0, j = 0;

        for(int i = 0; i < n; i++){
            j = max(i, j);
            while(j < n and c <= k){
                if(nums[j] == 0){
                    if(c == k) break;
                    c++;
                }
                j++;
            }
            len = max(len, j - i);
            cout << i << " " << j << "\n";
            if(nums[i] == 0 and c > 0) c--;
        }

        return len;

    }
};