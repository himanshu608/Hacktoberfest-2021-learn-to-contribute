#include<iostream>
using namespace std;
main()
{
	int i,a[100],b[100],n,j;
	
	cout<<"How many Elements You Enter : ";
	cin>>n;
	
	for(i=0; i<n; i++)
	{
		cout<<"a["<<i<<"] : ";
		cin>>a[i];
	}
	
//	j = n-1;
	
	for(i=0,j = n-1; i<n,j>=0; i++,j--)
	{
		b[j] = a[i];	
	  //  j--;
	}
	
	cout<<"\nAfter Reverse Array \n";
	
	for(i=0; i<n; i++)
	{
		a[i] = b[i];
		cout<<a[i]<<" ";	
	}
	
	
	
	
}
