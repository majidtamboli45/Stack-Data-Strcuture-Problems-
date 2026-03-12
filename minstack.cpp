#include <iostream>
#include <stack>
using namespace std;

class MinStack {
public:
    stack<long long> s;
    long long minVal;

    MinStack() {
        
    }
    
    void push(int val) {
        if(s.empty()) {
            s.push(val);
            minVal = val;
        } else {
            if(val < minVal) {
                s.push((long long)2 * val - minVal);
                minVal = val;
            } else {
                s.push(val);
            }
        }
    }
    
    void pop() {
        if(s.top() < minVal) {
            minVal = 2 * minVal - s.top();
        }
        s.pop();
    }
    
    int top() {
        if(s.top() < minVal) {
            return minVal;
        }
        return s.top();
    }
    
    int getMin() {
        return minVal;
    }
};

int main() {
    MinStack obj;

    obj.push(5);
    obj.push(3);
    obj.push(7);
    obj.push(2);

    cout << "Top: " << obj.top() << endl;
    cout << "Min: " << obj.getMin() << endl;

    obj.pop();

    cout << "Top after pop: " << obj.top() << endl;
    cout << "Min after pop: " << obj.getMin() << endl;

    return 0;
}