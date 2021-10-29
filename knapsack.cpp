#include<bits/stdc++.h>
using namespace std;


int knapsackt(int wt[], int val[], int n, int w)
{
    if(w==0 || n==0)
    {
        return 0;
    }

     if( wt[n-1]> w)
    return (knapsackt(wt,val,n-1,w));

    else
    return max(
            val[n - 1]+ knapsackt(wt,val, n-1, w- wt[n - 1]),knapsackt(wt, val, n - 1,w));
}
int main()
{

int val[]={60,100,120};
int wt[]={10,20,30};
int w=50;
// int n= sizeof(val)/sizeof(val[0]);
cout<<knapsackt(wt,val,3,w);
return 0;
}
