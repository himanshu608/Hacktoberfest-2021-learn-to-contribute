#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node* pre;
    node(int val)
    {
        data=val;
        pre=NULL;
    }
};
void multiply(node* tail, int n)
{
    node* temp= tail;
    node* prenode= tail;
    int carry=0;
    while(temp!=NULL)
    {
        int d=temp->data*n+carry;
        temp->data=d%10;
        carry=d/10;
        prenode= temp;
    }
    while (carry!=0)
    {
        prenode->pre=new node((int)(carry%10));
        carry /=10;
        prenode= prenode->pre;
    }
   
}
 void print(node* tail)
   {
       if(tail == NULL)
       return;
       print(tail->pre);
       cout<<tail->data;
   }
int main()
{
    int n;cin>>n;
    node tail(1);
    for(int i=2; i<n; i++)
    multiply(&tail,i);

    print(&tail);
    cout<<endl;

return 0;
}
