#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<int,int>mpp;  //ordered map declaration
	unordered_map<int,int>umpp; //unordered map declaration
	int arr[10]={1,2,1,3,4,3,1,6,7,9};
	for (int i=0;i<10;i++)
	{
		mpp[arr[i]]++;
	}
	mpp.insert(pair<int,int>(10,4)); //inserts the key and value to the map
	// to traverse a map
	for (auto it:mpp)   //first method
	{
		cout<<it.first<<" "<<it.second<<"\n";
	}
	// for(auto itr=mpp.begin();itr!=mpp.end();itr++)  //second method 
	// {
	// 	cout<<itr->first<<" "<<itr->second<<"\n";
	// }
	//assigning one map values to another map (like copying)
	//map<int,int>mpp2(mpp.begin(),mpp.end());
	// for (auto it:mpp2)   //mpp elements are copied to mpp2
	// {
	// 	cout<<it.first<<" "<<it.second<<"\n";
	// }
	// mpp2.erase(mpp2.begin(),mpp2.find(3)); //erases upto the key value 3
	// for (auto it:mpp2)   
	// {
	// 	cout<<it.first<<" "<<it.second<<"\n"; 
	// }
	//mpp.swap(mpp2); //swaps the elements of mpp and mpp2
	cout<<mpp.lower_bound(6)->first;  //at ley 6 first value is printed
	cout<<mpp.upper_bound(10)->second;
}