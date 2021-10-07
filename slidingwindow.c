/wap to find a subarray of three elements having sum required by the user
#include<stdio.h>
 int main()
{
    int a[100];
    int n;
    int i,j;
    printf("enter no of elements you want in array");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);}
    int sum;
    printf("enter the sum you want to find in array");
    scanf("%d",&sum);
    for(i=0;i<n;i++)
    {
        for(j=i;j<3;j++){
        if(a[i]+a[j+1]+a[j+2]==sum)
        {
            printf("sum is found");

        }

    }}return 0;

}
output:enter no of elements you want in array 6
  enter the elements 1 2 3 4 5 6
  enter the summ you want to find in array 6
  sum is found
