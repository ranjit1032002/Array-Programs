#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,count;
	cout<<"Enter The Size Of Array ->"<<endl;
	cin>>n;
	int a[n],b[n];
	cout<<"Enter The Element In The Array ->"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		b[i]=-1;
	}
	cout<<"The Elements Are ->"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
	cout<<endl;
	
	for(int i=0;i<n;i++)
	{
		count=1;
		for(int j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count=count+1;
				b[j]=0;
			}
		}
		if(b[i]!=0)
		{
			b[i]=count;
		}
	}
	cout<<"Elements|Frequency"<<endl;
	for(int i=0;i<n;i++)
	{
		if(b[i]!=0)
		{
			cout<<a[i]<<"|"<<b[i]<<endl;
		}
	}
}
