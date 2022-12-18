#include <bits/stdc++.h> 
string replaceSpaces(string &str){
	// Write your code here.
    string t="";
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==' ')
        {
            t.push_back('@');
            t.push_back('4');
            t.push_back('0');
        }
        else
        {
            t.push_back(str[i]);
        }
    }
    return t;
}