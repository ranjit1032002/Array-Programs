#include<iostream>
using namespace std;
int sort(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
	
}
int main()
{
	int a[100],b[100],n1,n2,i,j;
	
	cout<<"Enter The Size Of The 1st Array:-"<<endl;
	cin>>n1;
	a[n1];
	
	cout<<"Enter The Elements In 1st Array:-"<<endl;
	for(int i=0;i<n1;i++)
	{
		cin>>a[i];
	}
	
//	for(int i=0;i<n1-1;i++)
//	{
//		for(int j=0;j<n1-1;j++)
//		{
//			if(a[j]>a[j+1])
//			{
//				int temp=a[j];
//				a[j]=a[j+1];
//				a[j+1]=temp;
//			}
//		}
//	}
	
	cout<<"Enter The Size Of The 2nd Array:-"<<endl;
	cin>>n2;
	b[n2];
	
	cout<<"Enter The Elements In 2nd Array:-"<<endl;
	for(int i=0;i<n2;i++)
	{
		cin>>b[i];
	}
	
//	for(int i=0;i<n2-1;i++)
//	{
//		for(int j=0;j<n2-1;j++)
//		{
//			if(b[j]>b[j+1])
//			{
//				int temp=b[j];
//				b[j]=a[j+1];
//				b[j+1]=temp;
//			}
//		}
//	}
	
	int n3=n1+n2;
	int c[n3];
	
	for(int i=0;i<n1;i++)
	{
		c[i]=a[i];
	}
	for(i = 0, j = n1; j < n3 && i < n2; i++, j++)
	{
		c[j]=b[i];
	}
	cout<<endl;
	for(int i=0;i<n3;i++)
	{
		cout<<c[i];
	}
}
