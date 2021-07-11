#include<iostream>
using namespace std;
int max_min_element(int a[],int n)
{
	int min=a[0],max=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		else if(a[i]<min)
		{
			min=a[i];
		}
	}
	cout<<"Maximum Element In The Element:";
	cout<<max<<endl;
	cout<<"Minimum Element In The Element:";
	cout<<min;
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
	max_min_element(a,n);
}
