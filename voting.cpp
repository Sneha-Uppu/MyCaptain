#include<iostream>
using namespace std;
int main()
{
	int i=0, n, age;
	cout<<"Enter number of people you want to check wether eligible for voting or not"<<"\n";
	cin>>n;
	
	while(i<n)
	{
		cout<<"Enter the age person "<<(i+1)<<"\n";
		cin>>age;
		
		if(age>=18)
		{
			cout<<"Eligible for voting \n";
		}
		else
		{
			cout<<"Not eligible for voting"<<"\n";
			cout<<"Wait for "<<(18-age)<<"year(s) \n";
		}
		i++;
	}
}
