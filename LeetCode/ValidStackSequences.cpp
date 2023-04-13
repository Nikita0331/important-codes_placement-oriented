class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int n=pushed.size(),m=popped.size();
        if(m!=n)
        return false;
        stack<int>st;
        int j=0;
        for(int i=0;i<n;i++)
        {
            st.push(pushed[i]);
            
            while(!st.empty()&&st.top()==popped[j])
            {
                j++;
                st.pop();
            }
            
        }
       
        if(st.size()==0)
        return true;
        else
        return false;
    }
};
