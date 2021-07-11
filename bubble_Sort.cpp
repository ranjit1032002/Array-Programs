#include<iostream>
using namespace std;
int bubble_sort(int a[],int n)
{
	
	//	Right Element Agar Left Element Se Chota Hai To Swap Karna Padega
															//Initial----[7,5,4,2,0]----//
	for(int i=0;i<n-1;i++)									//1.----[5,4,2,0,7]----//	
	{														//2.----[4,2,0,5,7]----//	
		for(int j=0;j<n-1;j++)								//3.----[2,0,4,5,7]----//	
		{													//4.----[0,2,4,5,7]----//	
			if(a[j]>a[j+1])									
			{												//loop (n-1) Baar Chalega agar N Elements Hai(Outer Loop)
				int temp=a[j];								//loop (n-1) Baar Chalega agar N Elements Hai(inner Loop)
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	cout<<"Sorted Array:-"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
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
	bubble_sort(a,n);
}
