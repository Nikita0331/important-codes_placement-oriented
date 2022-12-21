class Solution {
public:
    string removeDuplicates(string s) {
        if(s.empty())
        return s;
        int n=s.size(), i=0;
        stack<char> S;
        while(i<n)
        {
            if(!S.empty()&&s[i]==S.top())
            S.pop();
            else
            S.push(s[i]);
            i++;
        }
        s="";
        while(!S.empty()){
            s.push_back(S.top());
            S.pop();
        }
        reverse(s.begin(),s.end());
        return s;
    }
};