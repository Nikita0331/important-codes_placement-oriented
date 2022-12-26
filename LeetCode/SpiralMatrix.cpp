class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        int r=matrix.size();
        int c=matrix[0].size();
        int total=r*c;
        int count=0,sr=0,sc=0,er=r-1,ec=c-1;
        while(count<total)
        {
            for(int i=sc;count<total&&i<=ec;i++)
            {
                res.push_back(matrix[sr][i]);
                count++;
            }
            sr++;
            for(int i=sr;count<total&&i<=er;i++)
            {
                res.push_back(matrix[i][ec]);
                count++;
            }
            ec--;
            for(int i=ec;count<total&&i>=sc;i--)
            {
                res.push_back(matrix[er][i]);
                count++;
            }
            er--;
            for(int i=er;count<total&&i>=sr;i--)
            {
                res.push_back(matrix[i][sc]);
                count++;
            }
            sc++;

        }
        return res;
    }
};