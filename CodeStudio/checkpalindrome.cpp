#include <bits/stdc++.h> 
bool valid(char ch)
{
    if((ch>='a'&&ch<='z' )||(ch>='0' &&ch<='9' )||(ch>='A'&&ch<='Z' ))      
        return 1;       
    else
        return 0;
}        
char lowercase(char ch)   
{       
    if((ch>='a'&& ch<='z')||(ch>='0'&&ch<='9'))            return ch;    
    else      
    {       
        char temp= ch-'A'+'a';   
        return temp;        }         
} 
bool palindrome(string a)
{
    int start=0; 
    int end= a.size()-1;      
    while(start<=end)  
    {       
        if(a[start]!=a[end]) 
            return false;
        else  
        {
            start++;
            end--; 
        }
    }
    return true; } 
bool checkPalindrome(string s)
{
    string str ="";  
    for(int j=0;j<s.size();j++)
    {
        if(valid(s[j])) 
            str.push_back(s[j]);       
    }
    for(int j=0;j<str.size();j++)
    {
        str[j]= lowercase(str[j]);     
    }
    return palindrome(str);  
    // Write your code here.
}
