class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        int n=s.length(),i=0;
        string str="";
        while(i<n)
        {
            if(s[i]==' ')
            {
                if(str.length()>0)
                {
                    st.push(str);
                    str.clear();
                }
            }
            else
            {str+=s[i];}
            i++;
        }
        if(str.length()>0)
        st.push(str);
        str.clear();
        while(st.size()!=0)
        {
            str+=st.top();
            st.pop();
            str+=' ';
        }
        str.pop_back();
        return str;
    }
};
