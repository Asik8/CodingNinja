#include <bits/stdc++.h> 
queue<int> reverseElements(queue<int> q, int k)
{
    queue<int> qu;
    stack<int>st;
    for(int i=0;i<k;i++)
    {
        st.push(q.front());
        q.pop();
    }
    while(!st.empty())
    {
        qu.push(st.top());
        st.pop();
    }
    while(!q.empty())
    {
        qu.push(q.front());
        q.pop();
    }
    return qu;
}
