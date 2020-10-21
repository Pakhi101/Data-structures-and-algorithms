#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
using namespace std;
int main()
{
	int x;
	vector<int> a;
	//PUSH_BACK
	for(int i=0;i<10;i++)
	{
		cin>>x;
		a.push_back(x);
	}
	for(vector<int> ::iterator i=a.begin(); i!=a.end(); ++i)
		cout<<*i<<" ";
	cout<<endl;
	vector<int> ::iterator j=a.begin();
	//ADVANCE
	advance(j,3); //distance covered is 3, points to the 4th element
	cout<<"Position = "<<(j-a.begin())<<" has = "<<*j<<" or = "<<a[j-a.begin()]<<endl;
	//COUNT
	int y = count(a.begin(),a.end(),8);
	cout<<"No of times 8 is present : "<<y<<endl;
	//MAX,MIN,FRONT,BACK
	cout<<"Max item : "<<*max_element(a.begin(),a.end())<<endl;
	cout<<"Min item : "<<*min_element(a.begin(),a.end())<<endl;
	cout<<"Item at 5th position is : "<<a.at(4)<<endl;
	cout<<"Item at 6th position is : "<<a[5]<<endl;
	cout<<"First item : "<<a.front()<<endl;
	cout<<"Last item : "<<a.back()<<endl;
	j=a.end()-1;
	cout<<*j<<endl;
	j=a.begin()+4;
	//INSERT AT A POSITION
	auto jh = a.insert(j,3,0);
	cout<<"Inserted : ";
	vector<int> ::iterator i;
	for(i=a.begin(); i!=a.end(); ++i)
		cout<<*i<<" ";
	cout<<endl<<"HAHAHAHAH "<<*jh;
	cout<<endl;
	//ERASE
	a.erase(j);
	cout<<"Erased : ";
	for(vector<int> ::iterator i=a.begin(); i!=a.end(); ++i)
		cout<<*i<<" ";
	cout<<endl;
	//POP_BACK
	a.pop_back();
	cout<<"Last element now after popping : "<<a.back();
	cout<<endl;
	vector<int> vect;
	vect.push_back(1);
	vect.push_back(2);
	//ASSIGN
	vect.assign(5,0);
	cout<<"New vector : ";
	for(vector<int> ::iterator i=vect.begin(); i!=vect.end(); ++i)
		cout<<*i<<" ";
	cout<<endl;
	int z = *max_element(a.begin(),a.end());
	cout<<z<<endl;
	cout<<vect.back();
	/*a.erase(unique(a.begin(),a.end()),a.end());
	cout<<endl<<"Unique elements = ";
	for(int x: a)
		cout<<x<<" ";*/
	
	//SORTING
	vector<int> la={1,9,2,1,5,6};
	sort(la.begin(),la.end());
	for(int x : la)
		cout<<x<<" ";
	
	//POSITION
    	vector<int> v1={9,3,4,5,6};
    	i = v1.begin()+3;
    	cout<<endl<<v1[i - v1.begin()];
    	cout<<endl<<v1[distance(v1.begin(),i)];
	i= find(v1.begin(),v1.end(),3);
	cout<<endl<<v1[i - v1.begin()]<<" at position = "<<(i - v1.begin());
	return 0;	
}
