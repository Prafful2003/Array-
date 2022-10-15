#include<iostream>
using namespace std;

int main()
{
    int b[5],sum;
    cout<<"Enter values "<<endl;
    for (int i=0; i<5; i++)
    {
    cin>>b[i];
    }
    for (int i=0; i<5; i++)
    {
    sum=sum+b[i];
    }
    
    cout<<"Average value is "<<sum;
    return 0;
}