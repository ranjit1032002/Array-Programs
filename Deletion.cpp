#include<bits/stdc++.h>
using namespace std;
int deletion(int a[],int n,int p)
{
	for(int i=p-1;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	cout<<"The Resultant Array is:-"<<endl;;
	for(int i=0;i<n-1;i++)
	{
		cout<<a[i]<<"\t";
	}
}
int main()
{
	int a[100],n,p;
	cout<<"Enter The Size Of Array:-"<<endl;;
	cin>>n;
	a[n];
	cout<<"Enter The Elements Of Array:-"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter The Position Of Element To Delete:-"<<endl;
	cin>>p;
	deletion(a,n,p);
}
