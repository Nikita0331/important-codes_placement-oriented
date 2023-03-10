class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length())
        return false;
        unordered_map<char,char> mp;
        unordered_map<char,char> mp1;
        int i=0;
        while(i<s.length())
        {
            if(mp[s[i]]&&mp[s[i]]!=t[i])
            {return false;}
            if(mp1[t[i]]&&mp1[t[i]]!=s[i])
            {return false;}
            mp[s[i]]=t[i];
            mp1[t[i]]=s[i];

            i++;
        }
        return true;
        
    }
};
