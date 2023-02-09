class Solution {
public:
    vector<vector<string>> ans;
    string temp;
    bool isPal(string &s, int i, int j){
        while(i < j){
            if(s[i] != s[j]) return 0;
            i++; j--;
        }
        return 1;
    }
    void solve(vector<string> &v, string &s, int in){
        if(in == s.size()){
            ans.push_back(v);
            return;
        }
        
        for(int i = in; i < s.length(); i++){
            if(isPal(s, in, i)){
                v.push_back(s.substr(in, i - in + 1));
                solve(v, s, i + 1);
                v.pop_back();
            }
        }
        return;
    }
    vector<vector<string>> partition(string s) {
        vector<string> v;
        int in = 0;
        
        solve(v, s, in);
        
        return ans;
    }
};