#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class MinStack {
public:
    vector<int> v;
    vector<int> sub_stack;
    MinStack() {
        vector<int> v;
        vector<int> sub_stack;
    }
    
    void push(int val) {
        v.push_back(val);
        if (!sub_stack.empty()) {
          sub_stack.push_back(min(val, sub_stack.back()));
        } else {
          sub_stack.push_back(val);
        }    
    }
    
    void pop() {
        v.pop_back();
        sub_stack.pop_back();
    }
    
    int top() {
       return v.back();
    }
    
    int getMin() {
       return sub_stack.back();
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