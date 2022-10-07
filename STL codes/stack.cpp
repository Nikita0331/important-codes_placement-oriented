#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack <int> s,temp;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<"top"<<" "<<s.top()<<endl;
    temp=s;
    cout<<"stack"<<endl;
    while(!temp.empty())
    {
        cout<<temp.top()<<endl;
        temp.pop();
    }
}
