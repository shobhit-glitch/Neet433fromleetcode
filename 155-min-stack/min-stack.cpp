class MinStack {
public:
stack<int>st;

    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        stack<int>temp;
        int minim=INT_MAX;
        while(!st.empty()){
            minim=min(st.top(),minim);
            temp.push(st.top());
            st.pop();
        }
        while(!temp.empty()){
            
            st.push(temp.top());
            temp.pop();
        }
        return minim;
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