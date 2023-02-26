class Solution {
public:
    bool solve(vector<int> &w,int mid,int days)
    {
        int sum=0,red=1;
        for(int i=0;i<w.size();i++)
        {
            if(sum+w[i]>mid)
            {
                red++;
                sum=0;
            }
            sum+=w[i];
        }
        if(red>days)
            return false;
        else
            return true;
    }
    int shipWithinDays(vector<int>& w, int days) {
        int low=*max_element(w.begin(),w.end()),high=accumulate(w.begin(), w.end(), 0),res=high;
        while(low<=high)
        {
        int mid=low+(high-low)/2;
            if(solve(w,mid,days))
            {
                res=mid;
                high=mid-1;
            }
            else
                low=mid+1;
        }
        return res;
    }
};
