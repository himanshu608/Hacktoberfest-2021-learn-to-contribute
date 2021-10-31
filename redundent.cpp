#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1;cin>>s1;
stack<char> st;
bool ans=false;
for(int i=0; i<s1.size(); i++)
{
    if(s1[i]=='+'|| s1[i]=='-'|| s1[i]=='/'|| s1[i]=='*')
    {
        st.push(s1[i]);
    }
    else if(s1[i]=='(')
    st.push(s1[i]);
    else if(s1[i]==')')
    {
        if(st.top()=='(')
        ans=true;

        while(st.top()=='+'|| st.top()=='-'|| st.top()=='/'|| st.top()=='*')
        {
            st.pop();
        }
        st.pop();
    }
   }
 cout<<ans;
return 0;
}
