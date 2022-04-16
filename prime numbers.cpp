#include<iostream>
using namespace std;

int main()
{
	int i,j,f,num,num1;
	cout<<"Enter Starting Number ";
	cin>>num;
	cout<<"Enter Second Number ";
	cin>>num1;
	while(num<=num1)
	{
		f=0;
		for(i=2;i<=num/2;i++)
		{
			if(num%i==0)
			{
				f=1; 
				break;
			}
		    
		}
		if(f==0)
			{
			
			cout<<num<<"\n";
			
		    }
	num=num+1;
	}
}
