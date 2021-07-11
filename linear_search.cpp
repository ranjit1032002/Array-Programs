#include<iostream>
using namespace std;
int linear_search(int a[],int n,int e)
{
	int i,flag=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==e)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		cout<<"Your Element Is At:-"<<endl;
		cout<<i+1;
	}
	
}
int main()
{
	int a[100],n,e;
	cout<<"Enter The Size Of the Array:-"<<endl;
	cin>>n;
	a[n];
	cout<<"Enter The Elements In The Array:-"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter The Element To Know The Position:-"<<endl;
	cin>>e;
	linear_search(a,n,e);
}
