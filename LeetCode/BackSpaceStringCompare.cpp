class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int n=s.size(), i=0,m=t.size(),j=0;
        stack<char> one;
        stack<char> two;
        while(i<n)
        {
            if(!one.empty()&& s[i]=='#')
            one.pop();
            if(s[i]!='#')
            one.push(s[i]);
            i++;
        }
       while(j<m)
        {
            if(!two.empty()&& t[j]=='#')
            two.pop();
            if(t[j]!='#')
            two.push(t[j]);
            j++;
        }
        return two==one;
    }
};
