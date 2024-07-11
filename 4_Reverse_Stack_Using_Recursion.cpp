void reverseStack(stack<int> &st) {
    if(st.empty())return;
    int x = st.top();
    st.pop();
    reverseStack(st);
    stack<int> s;
    while(!st.empty())
    {
        s.push(st.top());
        st.pop();
    }
    s.push(x);
    while(!s.empty())
    {
        st.push(s.top());
        s.pop();
    }
}