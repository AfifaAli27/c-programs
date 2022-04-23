#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	
	for(int i=1; i<=5; i++)
	{
		cout<<"Please Enter the value number "<<i<<" -->  ";
		cin>>arr[i];
		
	}
	cout<<"Output"<<endl;
	
	for(int i=0; i<=5; i++)
	{
		cout<<"\n"<<arr[i];
	}
}
