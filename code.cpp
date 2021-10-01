#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int t,temp=0;
    cin >> t;
    while(t--)
    {
        int a[3],i,count=0;
        for(i=0;i<3;i++)
        {
            cin >> a[i];
            if (a[i]==1)
             count++;

        }
        if(count>=2)
        temp++;
    }
    cout << temp;
    

    return 0;
}
