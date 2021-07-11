#include<iostream>
using namespace std;
int array_negative_elements(int a[],int n)
{
	cout<<"Array Negative Elements:-";
	for(int i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			cout<<a[i]<<"\t";
		}
	}
}
int main()
{
	int n,a[100];
	cout<<"Enter The Size Of Array:-";
	cin>>n;
	a[n];
	cout<<"Enter The Elements of Array:-"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	array_negative_elements(a,n);
}
