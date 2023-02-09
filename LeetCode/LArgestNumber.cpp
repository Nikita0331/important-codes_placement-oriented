string tmp1, tmp2;
bool cmp(string &a, string &b) {
    if (a.length() == b.length()) return a > b;
    tmp1 = a + b;
    tmp2 = b + a;
    return tmp1 > tmp2;
}
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        int n = nums.size();
        bool flag = 1;
        vector<string> v(n);
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) flag = 0;
            v[i] = to_string(nums[i]);
        }
        if (flag) return "0";
        sort(v.begin(), v.end(), cmp);
        string ans = "";
        for (int i = 0; i < n; i++) {
            ans += v[i];
        }
        return ans;
    }
};