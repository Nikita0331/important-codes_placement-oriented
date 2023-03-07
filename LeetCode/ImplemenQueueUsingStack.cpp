class MyQueue {
    stack<int> s;
    stack<int> t;
    public:
    MyQueue() {
    }
    void push(int x) {
        s.push(x);
    }

    int pop() {
        if(!t.empty()) {
            int val = t.top();
            t.pop();
            return val;
        }
        else {
            while(!s.empty()) {
                t.push(s.top());
                s.pop();
            }
            int val = t.top();
            t.pop();
            return val;
        }
    }
    
    int peek() {
        if(!t.empty()) {
            return t.top();
        }
        else {
            while(!s.empty()) {
                t.push(s.top());
                s.pop();
            }
            return t.top();
        }
    }
    
    bool empty() {
        if(s.empty() && t.empty()) {
            return true;
        }
        else {
            return false;
        }
    }
};


/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
