class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.length(),i;
        for(i=n-1;i>=0;i--)
        {
            if((num[i]-48)%2!=0)//check last digit is odd or even
            break;
        }
        num.resize(i+1);
        return num;
    }
};
