#include <bits/stdc++.h> 
// Stack class.
class Stack {
    vector<int>v;
    int x;
    int size;
public:
    
    Stack(int capacity) {
        // Write your code here.
        x=0;
        size=capacity;
//         v.resize(capacity);
    }

    void push(int num) {
        // Write your code here.
        if(x < size){
            v.push_back(num);
            x++;
        }else
            return;
    }

    int pop() {
        // Write your code here.
        if(x <= size && x >0){
            int t = v[--x];
            v.pop_back();
            return t;
        }else
            return -1;
    }
    
    int top() {
        // Write your code here.
        if(x >0)
        return v[x-1];
        else
            return -1;
    }
    
    int isEmpty() {
        // Write your code here.
        return x==0;
    }
    
    int isFull() {
        // Write your code here.
        return x==size;
    }
    
};