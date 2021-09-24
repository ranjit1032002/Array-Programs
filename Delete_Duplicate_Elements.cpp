#include<bits/stdc++.h>
using namespace std;
int delete_Duplicate_Elements(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				int temp=a[j];
				a[j]=a[n-1];
				a[n-1]=temp;
				n--;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
}
int main()
{
	int a[100],n;
	cout<<"Enter The Size Of The Array:-";
	cin>>n;
	a[n];
	cout<<"Enter The Elements In The Array:-";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	delete_Duplicate_Elements(a,n);
}
