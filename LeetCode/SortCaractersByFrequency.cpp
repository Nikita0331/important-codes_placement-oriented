class Solution {
public:
static bool cmp(pair<char, int>& a,
        pair<char, int>& b)
{
    return a.second < b.second;
}
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.length();i++)
        {
             mp.insert({s[i],mp[s[i]]++});
        }
        vector<pair<char,int>>v;
        string str="";
        for(auto x:mp)
        {
             v.push_back(make_pair(x.first,x.second));
        }
        sort(v.begin(),v.end(),cmp);
        for(auto & it:v){
               for(int i=0;i<it.second;i++){
                   str+=it.first;
                   
               }
           }
           reverse(str.begin(),str.end());
          
        return str;
    }
};
