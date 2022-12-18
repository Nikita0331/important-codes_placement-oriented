class Solution {
private:
    bool check(int a[26],int b[26])
    {
        for(int i=0;i<26;i++)
        {
            if(a[i]!=b[i])
            return 0;
        }
        return 1;
    }
public:
    bool checkInclusion(string s1, string s2) {
       int c1[26]={0};
       for(int i=0;i<s1.length();i++)
       {
           int index=s1[i]-'a';
           c1[index]++;
       } 
       int i=0,c2[26]={0};
       int k=s1.length();
       while(i<k&&i<s2.length())
       {
           int ind=s2[i]-'a';
           c2[ind]++;
           i++;
       }
       if(check(c1,c2))
       return 1 ;
       while(i<s2.length())
       {
           char newch=s2[i];
           int in=newch-'a';
           c2[in]++;
           char oldch=s2[i-k];
           in=oldch-'a';
           c2[in]--;
           i++;
           if(check(c1,c2))
       return 1 ;
       }
       return 0;
    }
};