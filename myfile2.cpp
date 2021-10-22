#include <bits/stdc++.h>
#define FASTIO    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
 

#define rand(st, ed)  uniform_int_distribution<int>(st, ed)(rng)
 


void cp()
{
	long long y=0,a,b;
	cin >> a >> b;
	
	while((3^y)*a <= (2^y)*b);
	{
		y++;
	}
	cout << y;

	
	return ;
	
}



 
int main()
{
    FASTIO;
    long long t;
    cp();
    return 0;
}
