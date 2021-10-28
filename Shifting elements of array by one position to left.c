// Program to shift elements of the array by one position to the left without reversing the array.
// 
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100];
	int i,n,temp;
	printf("Enter the number of elements to be inserted : \n");
	scanf("%d",&n);
	
	printf("Enter elements in the array to be inserted : \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	temp=a[0];
	for (i=0;i<n-1;i++)
	{
    	a[i]=a[i+1];
	}
	a[n-1]=temp;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}

---------------------------------------------------------------------------------------------------------------------------------------------------------------------
/*

Output :- 

Enter number of elements to be inserted :
5
Enter elements in the array :
7
9
5
1
3
9 5 1 3 7

*/
