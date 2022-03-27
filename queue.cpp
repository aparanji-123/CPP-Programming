#include<bits/stdc++.h>
using namespace std;
int main()
{
	queue<int>qq;
	qq.push(20);
	qq.push(10);
	qq.push(40);
	qq.push(30);
	qq.push(50);
	cout<<qq.size()<<"\n";  //5 //returns the size
	cout<<qq.empty()<<"\n"; //0-not empty //1-empty
	while(!qq.empty())
	{
		cout<<qq.front()<<" "; //20 10 4 30 50
		qq.pop();
	}
	queue<int>qq2(qq);
	qq.swap(qq2);
	while(!qq2.empty())
	{
		cout<<qq2.front()<<" "; //20 10 4 30 50
		qq.pop();
	}
}