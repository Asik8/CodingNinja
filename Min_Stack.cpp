#include <bits/stdc++.h> 
// Implement class for minStack.
class minStack
{
	stack<int>st;
	stack<int> v;
	
	public:
		minStack() 
		{ 
			// Write your code here.
		}
		
		// Function to add another element equal to num at the top of stack.
		void push(int num)
		{
			st.push(num);
			if(v.empty() || num<=v.top())
			{
				v.push(num);
			}
		}
		
		// Function to remove the top element of the stack.
		int pop()
		{
			if(st.empty()) return -1;
			else 
			{
				int item = st.top();
				st.pop();
				if(!v.empty() && item == v.top()) v.pop();
				return item;
			}
		}
		
		// Function to return the top element of stack if it is present. Otherwise return -1.
		int top()
		{
			if(st.empty()) return -1;
			else return st.top();
		}
		
		// Function to return minimum element of stack if it is present. Otherwise return -1.
		int getMin()
		{
			if(v.empty()) return -1;
			else return v.top();
		}
};