class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& arr) {
        
        int n=arr.size();
        vector<int>res(n);
        stack<int>st;
        for(int i=0;i<2*n;i++)
        {
          
            while(!st.empty() &&arr[st.top()]<arr[i%n])
            {
                res[st.top()]=arr[i%n];
                st.pop();
                
            }
            if(i<n)
            st.push(i%n);
            
           // reverse(res.begin(),res.end());
            
        }
        while(!st.empty())
        {
            res[st.top()]=-1;
            st.pop();
        }
        return res;
    }
};
