#include <bits/stdc++.h> 
class Queue {
public:
    vector<int>v;
    Queue() {
        // Implement the Constructor
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        return v.empty();
    }

    void enqueue(int data) {
        v.push_back(data);
    }

    int dequeue() {
        if(v.empty()) return -1;
        else
        {
            int item = v.front();
            v.erase(v.begin());
            return item;
        }
    }

    int front() {
        if(v.empty()) return -1;
        else return v.front();
    }
};