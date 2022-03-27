#include<bits/stdc++.h>
using namespace std;
int main()
{
	set<int>se;
	set<int>se2;
	se.insert(1); //to insert elements into set
	se.insert(2);
	se.insert(3);
	se.emplace(4);
	cout<<*se.find(3);  //3
	cout<<se.count(2)<<"\n";  //1 as sets do not acept duplicates
	for(auto it:se)  //to traverse the set
	{
		cout<<it<<" ";   //1 2 3 4
	}
	cout<<"\n";
	se2.insert(10);
	se2.insert(20);
	se2.insert(30);
	se2.insert(40);
	for(auto it:se2)
	{
		cout<<it<<" ";
	}
	se.swap(se2);
	cout<<"\n";
	for(auto it:se)  //to traverse the set
	{
		cout<<it<<" ";   //10 20 30 40
	}
	cout<<"\n";
	for(auto it:se2)
	{
		cout<<it<<" ";    //1 2 3 4
	}
	cout<<*se.lower_bound(1)<<"\n";
	cout<<*se.upper_bound(4)<<"\n";
	se.erase(3);   //erases 3 from the set
	for(auto it:se)  
	{
		cout<<it<<" ";   //1 2 4
	}
	cout<<"\n";
	auto it1=se.begin();
	auto it2=se.find(2);
	se.erase(it1,it2);   //erases till the given range  
	for(auto it:se)   
	{
		cout<<it<<" ";  
	}
	cout<<"\n";
	//begin() end() rbegin() rend() empty() size() swap()
	cout<<se.empty();   //returns 0 if set is not empty
	cout<<se2.empty();  //returns 1 if set is empty
	cout<<se.size();      //2
	cout<<se2.size()<<endl;     //0
	cout<<se.max_size();    //returns max elements the set can store(214748364)
	se.clear();     //removes all the elements of the set
	cout<<se.size(); 
	return 0;
}