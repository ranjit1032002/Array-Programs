#include<iostream>
using namespace std;
void print_array(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i];
	}
}
int even_odd_elements(int a[],int n)
{
	int b[n],c[n],count1=0,count2=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			b[count1]=a[i];
			count1++;
		}
		else 
		{
			c[count2]=a[i];
			count2++;
		}
	}
	cout<<"Even Elements In The Array:-"<<endl;
	print_array(b,count1);
	cout<<endl;
	cout<<"Odd Elements In The Array:-"<<endl;
	print_array(c,count2);
	
}
int main()
{
	int n;
	cout<<"Enter The Size Of Array:-";
	cin>>n;
	int a[n];
	cout<<"Enter The Elements In Array:-";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	even_odd_elements(a,n);
}
