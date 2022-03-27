#include<bits/stdc++.h>
using namespace std;
int main()
{
	stack<int>st;
	st.push(11);
	st.push(22);
	st.push(33);
	st.push(44);
	st.push(55);
	cout<<st.size();  //5
	cout<<"\n"<<st.empty();  //0-not empty
	cout<<"\n"<<st.top();  //returns the topmost element 55
	st.pop();
	cout<<"\n";
	while(!st.empty()){
		cout<<st.top()<<" ";  //44 33 22 11
		st.pop();
	}
}