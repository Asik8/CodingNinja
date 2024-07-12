#include <bits/stdc++.h>
using namespace std;

string kevinStackProblem(string &s)
{
	stack <char>st;
	for(char c:s)
	{
		st.push(c);
	}
    s.clear();
	while(!st.empty())
	{
		s.push_back(st.top());
		st.pop();
	}
	return s;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<kevinStackProblem(s)<<endl;
    }
}
