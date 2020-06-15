#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,n;
	cin>>x>>n;
	int a[101],b[102]={0};
	if(n==0)
	{
		cout<<x<<endl;
	}
	else 
	{
	
	    for(int i=0;i<n;i++)
	    {
		cin>>a[i];
	    }
		for(int j=0;j<n;j++)
		{
		  b[a[j]]=1;
		  
	    }
	    int min=INT_MAX,num;
		for(int i=1;i<=101;i++) 
		{
			if(b[i]==0)
			{
				if(abs(i-x)<min)
				{
					min=abs(i-x);
					num=i;
				}
			}
		}
		cout<<num<<endl;
	}
		return 0;
}
