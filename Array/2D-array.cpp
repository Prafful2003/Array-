#include<iostream>
using namespace std ;
int main ( )
{
	int a[3][2],sum;
	
	cout<<"Enter 2D array values "<<endl;
	
	for (int i=0; i<3; i++)
	{
		for (int j=0; j<2; j++)
		{
			cin>>a[i][j];
		}
	}
	
	cout<<"--------------------2D-array-------------"<<endl;
	
	for (int i=0; i<3; i++)
	{
		for (int j=0; j<2; j++)
		{
			cout<<"The value of ["<<i<<","<<j<<"]"<<a[i][j]<<endl;
		}
	}
}