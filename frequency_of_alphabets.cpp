#include<bits/stdc++.h>
using namespace std;
int main()
{
//	int n;
//	cout<<"Enter The Size Of Array->"<<endl;
//	cin>>n;
	int l=0,v=0,count,b[100];
	char a[100];
	cout<<"Enter the String->"<<endl;
	gets(a);
	for(int i=0;a[i]!='\0';i++)
	{
		l=l+1;
	}
	for(int i=0;i<l;i++)
	{
		b[i]=-1;
	}
	for(int i=0;i<l;i++)
	{
		count=1;
		for(int j=i+1;j<l;j++)
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
	for(int i=0;i<l;i++)
	{
		if(b[i]!=0)
		{
			cout<<a[i]<<"->"<<b[i]<<endl;
		}
	}
	
}