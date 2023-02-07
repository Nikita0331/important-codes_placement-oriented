class Solution {
public:
void valid(int n,int l,int r,string s,vector<string>&res)
{
    if(l==n&&r==n)
    {
        res.push_back(s);
        return;
    }
    else if(l==r)
    {
        //s[i]="(";
        valid(n,l+1,r,s+"(",res);
    }
    else if(l>r)
    {
        if(l==n)
        {
            //s[i]=")";
            valid(n,l,r+1,s+")",res);
        }
        else
        {
           // s[i]="(";
            valid(n,l+1,r,s+"(",res);
            //s[i]=")";
            valid(n,l,r+1,s+")",res);
        }
    }
}
    vector<string> generateParenthesis(int n) {
        int l=0,r=0,i=0;
   vector<string>s;
   valid(n,l,r,"",s);
   return s;
   
    }
};