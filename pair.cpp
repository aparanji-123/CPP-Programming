#include<bits/stdc++.h>
using namespace std;
int main(){
pair<int,int>c={2,3};  //pair
	cout<<c.first<<" "<<c.second;
	vector<pair<int,pair<int,int>>>pp={{1,{0,5}},{2,{1,4}},{3,{2,3}}}; //vector with value and a pair
	for(auto it:pp)
	{
		cout<<" "<<it.first<<",{"<<it.second.first<<","<<it.second.second<<"}\n";
	}
	vector<pair<int,int>>p;
	//p.push_back(34); //throws an error as p is a vector with pairs
	p.push_back({14,45});
	p.push_back({85,69});
	for(auto it:p)
	{
		cout<<it.first<<" "<<it.second<<"\n";//14 45  85 69
	}
}