#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	int ROWS = 2;
	int COLUMNS = 2;
	int matrixX[ROWS][COLUMNS];
	int matrixY[ROWS][COLUMNS];
	int sum[ROWS][COLUMNS];
	
	cout<<"Please Enter values for MatrixX : "<<endl;
	for(int i = 0; i<ROWS; i++)
	{
		for(int j = 0; j<COLUMNS; j++)
	    {
		  cin>>matrixX[i][j];
	    }
	}
	cout<<endl;
	for(int a = 0; a<ROWS; a++)
	{
		for(int b = 0; b<COLUMNS; b++)
		{
			cout<<matrixX[a][b]<<"\t";
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<"Please Enter values for MatrixY : "<<endl;
	for(int i = 0; i<ROWS; i++)
	{
		for(int j = 0; j<COLUMNS; j++)
	    {
		  cin>>matrixY[i][j];
	    }
	}
	
	cout<<endl;
	for(int a = 0; a<ROWS; a++)
	{
		for(int b = 0; b<COLUMNS; b++)
		{
			cout<<matrixY[a][b]<<"\t";
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<"Addition of Matrix X and Y = "<<endl;
    for(int i = 0; i<ROWS; i++)
    {
    	for(int j = 0; j<COLUMNS; j++)
    	{
    		sum[i][j] = matrixX[i][j] + matrixY[i][j];
    		cout<<sum[i][j]<<"\t";
    		cout<<endl;
		}
	}
	
	cout<<endl;
	for(int a= 0; a<ROWS; a++)
	{
		for(int b=0; b<COLUMNS; b++)
		{
			cout<<sum[a][b]<<"\t";
		}
		cout<<endl;
	}
}


