#include <bits/stdc++.h> 
using namespace std;
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    stack<int>s;
    while(!myStack.empty())
    {
        s.push(myStack.top());
        myStack.pop(); 
    }
    s.push(x);
    while(!s.empty())
    {
        myStack.push(s.top());
        s.pop(); 
    }
    return myStack;
}
