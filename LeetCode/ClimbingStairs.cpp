class Solution {
public:
    int climbStairs(int n) {
        int pp=0,p=1,c;
        for(int i=0;i<n;i++)
        {
            c=pp+p;
            pp=p;
            p=c;
        }
        return c;
    }
};
