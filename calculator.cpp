#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int valueOne;
	int valueTwo;
	int choice;
	int flag;
	do
	{
	 cout<<"Enter ValueOne"<<endl;
	cin>>valueOne;
	
	 cout<<"Enter valueTwo"<<endl;
	 cin>>valueTwo;
	
	 cout<<"Please Enter your choice; \n1. Add \n2. sub \n3. mul \n4. Divide \n5. sin \n6. tan \n7. cos"<<endl;
	 cin>>choice;
	
	switch(choice)
	{
		case 1:
			cout<<"The sum of these two values = "<<valueOne+valueTwo;
			break;
			
	    case 2:
	    	cout<<"The difference = "<<valueOne-valueTwo;
	    	break;
	    	
	    case 3:
		    cout<<"The multiplication of these two variables = "<<valueOne*valueTwo;
		    break;
		    
		case 4:	
		    cout<<"The division of these two variables = "<<valueOne/valueTwo;
		    break;
		    
		case 5:
			int myChoice;
			cout<<"\n For which value you want to calculate Sin\n1\n2"<<endl;
			cin>>myChoice;
			if(myChoice==valueOne)
			{
			cout<<"The sin value of the value ("<<valueOne<<") is "<<sin(valueOne);
		    }
		    if(myChoice==2)
			{
				cout<<"value of Sin("<<valueTwo<<") is"<<sin(valueTwo);
			}
			else
			{
				cout<<"Invalid Choice "<<endl;	
	        }  
			break;
			
		case 6:
			 int mychoice;
			cout<<"\n For which value you want to calculate cos\n1\n2"<<endl;
			cin>>mychoice;
			if(mychoice==valueOne)
			{
			cout<<"The cos value of the value ("<<valueOne<<") is "<<cos(valueOne);
		    }
		    if(mychoice==2)
			{
			cout<<"value of Cos("<<valueTwo<<") is"<<cos(valueTwo);	
			}
			else
			{
				cout<<"Invalid Choice"<<endl;
			}
			break;
		    
		case 7:
		    int mychoice1;
		    cout<<"\n For which value you want to calculate tan\n1\n2"<<endl;
			cin>>mychoice1;
			if(mychoice1==valueOne)
			{
			cout<<"The tan value of the value ("<<valueOne<<") is "<<tan(valueOne);
		    }
		    if(mychoice1==2)
			{
				cout<<"value of Tan("<<valueTwo<<") is" <<tan(valueTwo);
			}
			else
			{
				cout<<"Invalid Choice"<<endl;
			}
			break;
			
		default:
		cout<<"Invalid Choice";
		break;
	}
	     	
	
	cout<<"\n Enter any Number other than 0 to continue ";
	cout<<"\n Enter 0 to exit ";
	cin>>flag;
   }
   while (flag !=0);
}
