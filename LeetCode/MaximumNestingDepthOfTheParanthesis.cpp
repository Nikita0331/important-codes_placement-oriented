class Solution {
public:
    int maxDepth(string s) {
        int n=s.length(),max=0;
        stack<char>st;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            st.push('(');
            else if(s[i]==')')
            {
                if(st.size()>max)
                max=st.size();
                st.pop();
            }
        }
        return max;
    }
};
