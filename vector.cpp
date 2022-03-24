#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> vec;
	vec.push_back(10); //insertion of elements
	vec.push_back(20);
	vec.push_back(30);
	vec.push_back(40);
	vec.emplace_back(50);//insertion is same but time complexity matters
	vec.pop_back(); //to remove the element
	//ways to print vector using loops
	for(int i=0;i<vec.size();i++) //first method
	{
		cout<<vec[i]<<" "; 
	}
	cout<<"\n";
	vec.erase(vec.begin()+2); //erases the 3rd element
	vec.erase(vec.begin(),vec.begin()+2); //to erase a range of elements
	vec.insert(vec.begin(),300); //insert an element at the beginning
	vec.insert(vec.end(),300); //insert an element at the end
	vec.insert(vec.begin(),2,10);//insert two 10's at the beginning
	vec.insert(vec.end(),2,10);//insert two 10's at the end
	for(auto it:vec)  //second method
	{
		cout<<it<<" ";
	}
	for(auto it=vec.begin();it!=vec.end();it++) //third method
	{
		cout<<*it<<" ";
	}
    for(auto it=vec.rbegin();it!=vec.rend();it++) //fourth method
	{
		cout<<*it<<" ";
	}
	 To insert at desired location
	 vec.insert(ve.begin(),300); //insert an element at the beginning
	 vec.insert(vec.begin(),2,10);
	 vec.clear();  //to erase all the values
	 vector<int>v1={2,4};
	 vector<int>v2={1,3};
	 v1.swap(v2);   //swaps the elements of two vectors
	 for(auto it:v1)  
	 {
	 	cout<<it<<" ";
	 }
	 for(auto it:v2)  
	 {
	 	cout<<it<<" ";
	 }
	 vector<int> copy(2,10);
	 vec.insert(vec.begin(),copy.begin(),copy.end()); 
	 for(auto it:vec)  
	 {
	 	cout<<it<<" "; //10 10 10 20 30 40 
	 }
	two-dimensional vector 2D vector
	vector<vector<int>>matrix={{1,2,3},{4,5,6},{7,8,9}};
	for (int i=0;i<matrix.size();i++)
	{
		for(int j=0;j<matrix.size();j++)
		{
			cout<<matrix[i][j]<<" ";
		}
			cout<<endl;
	}
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
	//to sort a vector in descending order
	sort(vecc.begin(),vec.end(),greater<int>());
}
