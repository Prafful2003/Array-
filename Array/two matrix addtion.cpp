#include<iostream>
using namespace std ;
int main( )
{
	int x,y;
	cout<<"Enter rows number ";
	cin>>x;
	cout<<"Enter columns number ";
	cin>>y;
	int a[x][y];
	int b[x][y];
	int c[x][y];
	for (int i=0; i<x; i++)
	{
		for (int j=0; j<y; j++)
		{
			cout<<"Enter values of matrix A "<<endl;
			cin>>a[i][j];
			cout<<"Enter values of matrix B "<<endl;
			cin>>b[i][j];
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	
	for (int i=0; i<x; i++)
	{
		for (int j=0; j<y; j++)
		{
			cout<<"The value of ["<<i<<","<<j<<"]"<<c[i][j];
		}
		cout<<endl;
	}
}
