#include<vector>
#include<numeric>
#include<iostream>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<vector<int> > vec;
	for(int i=0;i<3;i++)
	{
		vector<int> v1;
		for(int j=0;j<3;j++)
		{
			v1.push_back(j);
		}
		vec.push_back(v1);
	}
    cout<<vec[1][2]<<endl;
    vector<int>::iterator x;
    vector<int>::iterator j;
    for(int i=0;i<vec.size();i++)
    {
    	for(j=vec[i].begin();j!=vec[i].end();j++)
    	{
    		cout<<*j<<" ";
		}
		cout<<"\n";
	}
    return 0;
}
