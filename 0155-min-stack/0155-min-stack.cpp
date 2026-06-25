class MinStack {
private:
    stack<int> obj;
    stack<int> min;
public:
    MinStack() {
        
    }
    void push(int val) {
        obj.push(val);
        if(min.empty() || val<min.top()){
            min.push(val);
        }
        else{
            min.push(min.top());
        }
    }
    void pop() {
        obj.pop();
        min.pop();
    }
    
    int top() {
        return obj.top();
    }
    
    int getMin() {
        return min.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */