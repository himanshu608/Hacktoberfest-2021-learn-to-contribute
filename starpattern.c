#include<stdio.h>
int main()
{
	int i;
	int j;
    int n=7;
	int x=n, y=n;
    for(i=1; i<=n; i++)
	{
        for(j=1; j<n*2; j++)
		{
            if(j>=x && j<=y)
			{
               printf("*");
            }
            else
			{
                printf(" ");
            }
        }
        x--;
        y++;
        printf("\n");
    }
    return 0;
}