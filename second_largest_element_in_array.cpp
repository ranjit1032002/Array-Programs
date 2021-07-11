#include<iostream>
using namespace std;
int second_largest_element(int a[],int n)
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
	cout<<"Your Array In Sorted Manner:-"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
	cout<<endl;
	cout<<"Second Largest Element In The Array:-"<<endl;
	cout<<a[n-2];
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
	second_largest_element(a,n);
}
