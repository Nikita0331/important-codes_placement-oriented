class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
        int res = 0;
        int c1 = 0;
        int c0 = 0;
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i] == '0') c0++;
            if(s[i] == '1') c1++;
            if(c1 >= c0) res = max(res,c0*2);
            if(c0 >= c1) res = max(res,c1*2);
            if(s[i] == '1' && s[i+1] == '0')
            {
                c0 = 0;
                c1 = 0;
            }
        }

        return res;
   
    }
};
