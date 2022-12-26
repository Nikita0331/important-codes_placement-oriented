class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=matrix.size();
        int c=matrix[0].size();
        int s=0;
        int e=r*c-1;
        int m=s+(e-s)/2;
        while(s<=e)
        {
            int ele=matrix[m/c][m%c];
            if(ele==target)
            {
                return 1;
            }
            if(ele<target)
            {
                s=m+1;
            }
            else
            {
                e=m-1;
            }
            m=s+(e-s)/2;
        }
        return 0;
    }
};