class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        string res = "";
        for(auto x : s){
            if(x == '('){
                if(st.size() > 0){
                    res += x;
                }
                st.push(x);
            }
            else if(x == ')'){
                if(st.size() > 1){
                    res += x;
                }
                st.pop();
            }
        }
        return res;
    }
};



