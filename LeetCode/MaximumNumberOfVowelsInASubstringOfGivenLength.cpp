class Solution {
public:
bool isvowel(char ch)
{
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    return true;
    return false;
}
    int maxVowels(string s, int k) {
        int n=s.length();
        int cv=0;
        for(int i=0;i<k;i++)
        {
            if(isvowel(s[i]))
            cv++;
        }
        int maxv=0;
        if(maxv<cv)
        maxv=cv;
        for(int i=k;i<n;i++)
        {
            if(isvowel(s[i]))
            cv++;
            if(isvowel(s[i-k]))
            cv--;
            maxv=max(maxv,cv);
        }
        return maxv;
    }
};
