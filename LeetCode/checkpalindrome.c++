class Solution 
    {
     public:
         bool isPalindrome(int x) 
    {
           string s = to_string(x);
        int start=0;
        int high=s.length()-1;
        while(start<high)
        {
            if(s[start++]!=s[high--])
                return false;
        }
        return true;
        }
};