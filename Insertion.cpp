#include<bits/stdc++.h>
using namespace std;
int insert_element(int a[],int n,int p,int e)
{
	for(int i=n-1;i>=p-1;i--)
	{
		a[i+1]=a[i];
	}
	a[p-1]=e;
	cout<<"After Insertion:-"<<endl;
	for(int i=0;i<=n;i++)
	{
		cout<<a[i]<<"\t";
	}
}
int main()
{
	int n,a[100],p,e;
	cout<<"Enter The Size Of Array:-"<<endl;
	cin>>n;
	a[n];
	cout<<"Enter The Elements Of Array:-"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter The Position Where To Insert:-"<<endl;
	cin>>p;
	cout<<"Enter The ELement to Insert:-"<<endl;
	cin>>e;
	insert_element(a,n,p,e);

}
