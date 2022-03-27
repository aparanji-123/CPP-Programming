#include<bits/stdc++.h>
using namespace std;
int main()
{
	list<int>ln={10,20,30,40,50};
	list<int>ln2={60,70,80,90,100};
	ln.push_front(12);  //inserts 12 at the front
	ln.push_back(12);   //inserts 21 at the end
	for(auto it:ln)
	{
		cout<<it<<" ";   //12 10 20 30 40 50 21
	}
	cout<<"\n";
	for(auto it:ln2)
	{
		cout<<it<<" ";   //60 70 80 90 100
	}
	cout<<"\n";
	ln.swap(ln2);   //swaps the lists
	ln.sort();       //sorts the array elements
	for(auto it:ln)
	{
		cout<<it<<" ";   //10 12 20 21 30 40 50
	}
	cout<<"\n";
	ln.reverse();   //reverses the list
	for(auto it:ln)
	{
		cout<<it<<" ";  //50 40 30 21 20 12 10
	}
	ln.pop_front();    //removes first element
	ln.pop_back();     //removes the last element
	cout<<"\n";
	for(auto it:ln)
	{
		cout<<it<<" ";  //10 20 30 40 50
	}
	cout<<ln.empty(); //returns 0 if not empty and 1 if empty

	return 0;
}