bool cmp(pair<int,float>&a,pair<int,float>&b)
    {
        return a.first > b.first;
    }
class Solution {
public:
    
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,float>>t;
        int c=1;
        if(position.size()==0)return 0;
        for(int i=0;i<position.size();i++)
        {
            t.push_back({position[i],((target-position[i])*1.0/speed[i])});
        }
        sort(t.begin(),t.end(),cmp);
        for(int i =1;i<t.size();i++)
        {
            if(t[i].second<=t[i-1].second)
            {
                t[i].second=t[i-1].second;
                
            }
            else
            c++;
        }
        return c;
    }
};