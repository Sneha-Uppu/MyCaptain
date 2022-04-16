#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter number of elements of array: ";
	cin>>n;
	int ele[n];
	cout<<"Enter "<<n<<" elements: "<<endl;
	
	for(int i=0; i<n; i++)
	{
		cin>>ele[i];
	}
	
	cout<<"Elements entered are: "<<endl;
	int j=0;
	while(j<n)
	{
		cout<<*(ele+j)<<"\n";
		j++;
	}
	return 0;
}
