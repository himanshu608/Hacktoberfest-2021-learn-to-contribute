//Enter a number

#include <iostream>

using namespace std;

int  main()

{

    float n,i,f=1;

    cin>>n;

    for(i=1;i<=n;i++)

    {

        f=f*i;

    }

    cout<<"\nFactorial is "<<f;

    return 0;

}
