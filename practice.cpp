#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        long long n, m, k;
        cin>>n>>m>>k;
        k--;
        if(m>=(n-1) && k>2){
            cout<<"YES"<<endl;
        }else if(k==2 && m==((n*(n-1))/2)){
            cout<<"YES"<<endl;
        }else if(k==1 && m==0 && n==1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}

