#include<iostream>
using namespace std;
int main()
{
	int valueOne;
	int valueTwo;
	int choice;
	
	cout<<"Select valueOne "<<endl;
	cin>>valueOne;
	
	cout<<"Select valuetwo "<<endl;
	cin>>valueTwo;
	
	cout<<"Select Choice: \n1. Add \n2. Sub \n3. Mul \n4. Divide"<<endl;
	cin>>choice;
	
	switch(choice)
	{
		case 1:
		case 11:	
			cout<<"The sum of these two variables = "<<valueOne+valueTwo;
			break;
		case 2:
		case 22:	
		     cout<<"The subtraction of these two variables = "<<valueOne-valueTwo;
		     break;
		case 3:
		case 33:	
		    cout<<"The multiplication of these two variables = "<<valueOne*valueTwo;
		    break;
		case 4:
		case 44:	
		    cout<<"The division of these two variables = "<<valueOne/valueTwo;
		    break;
		default:
		cout<<"Invalid Choice";
		break;
		         	
	}
}
