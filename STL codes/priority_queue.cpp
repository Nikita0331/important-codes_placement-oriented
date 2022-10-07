#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue <int> q,temp;
    q.push(10);
    q.push(20);
    q.push(100);
    q.push(40);
    q.push(90);
    cout<<"size"<<" "<<q.size()<<endl;
    cout<<"top"<<" "<<q.top()<<endl;
    temp=q;
    cout<<"queue"<<endl;
    while(!temp.empty())
    {
        cout<<temp.top()<<endl;
        temp.pop();
    }
}
