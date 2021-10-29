#include<bits/stdc++.h>
using namespace std;
int main()
{
string str="hello world";

stack<string> st;

for(int i=0; i<str.length(); i++)
{
    string word="";
    while(str[i]!=' ' && i<str.length())
    {
        word+=str[i];
        i++;
    }
    st.push(word);
}

while(!st.empty())
{
    cout<<st.top()<<" ";
    st.pop();
}



return 0;
}
