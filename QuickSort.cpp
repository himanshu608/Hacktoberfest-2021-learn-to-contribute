#include<bits/stdc++.h>
using namespace std;

int partition(int a[],int lo,int hi){
    int pivot = a[lo];
    int i = hi+1;
    for(int j=hi;j>=lo;j--){
        if(a[j]>pivot){
            i--;
            swap(a[i],a[j]);
        }
    }
    swap(a[i-1],a[lo]);
    return i-1;
}

void quickSort(int a[],int lo,int hi){
    if(lo>hi)
        return;
    int pi = partition(a,lo,hi);
    quickSort(a,lo,pi-1);
    quickSort(a,pi+1,hi);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    quickSort(a,0,n-1);    
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
}
