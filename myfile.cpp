#include <bits/stdc++.h>
#define FASTIO    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
 

#define rand(st, ed)  uniform_int_distribution<int>(st, ed)(rng)
 


void cp()
{
	long long n,h,i;
	cin >> n >> h;
	long long temp=n;
	long long arr[n];
	for (i=0;i<n;i++)
	{
		cin >> arr[i];
		if(arr[i]>h)
		{
			temp++;
		}
	}
	cout << temp <<endl;
	
	return ;
	
}



 
int main()
{
    FASTIO;
    long long t;
    t = 1;
   
    while(t--)
    {
        cp();
    }
    return 0;
}
