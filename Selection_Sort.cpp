#include<iostream>
using namespace std;
int selection_sort(int a[],int n)
{
	for(int i=0;i<n-1;i++)									//Selection Sort me Pahele Sabse Chota ELement Ko Sabse Pahele Lana Hota hai								
	{
		int minIndex=i;																																							
		for(int j=i;j<n;j++)
		{
			if(a[j]<a[minIndex])
			{
				minIndex=j;
			}
			int temp=a[i];
			a[i]=a[minIndex];
			a[minIndex]=temp;
		}																	
	}
	
	cout<<"The Sorted Elements Are:-"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
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
	selection_sort(a,n);
}

