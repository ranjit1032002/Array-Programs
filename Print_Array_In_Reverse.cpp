#include<bits/stdc++.h>
using namespace std;
int print_in_reverse(int a[],int n)
{
	int b[n];
	for(int i=0;i<n;i++)
	{
		b[i]=a[n-i-1];
	}
	cout<<endl;
	cout<<"The Array Elements In Reverse Order:-"<<endl;;
	for(int i=0;i<n;i++)
	{
		cout<<b[i]<<"\t";
	}
}
int main()
{
	int n;
	cout<<"Enter The Size Of Array:-"<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter The Elements Of Array:-"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Your Array Elements:-"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
	print_in_reverse(a,n);
}
