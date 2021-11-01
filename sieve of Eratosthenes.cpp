#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while( t-- ){
        int range,i;
        cin >> range;
        bool idx[range+1];
        for (i = 0; i <= range; i++)
            idx[i]=true;       
        for(i = 2; i*i <= range; i++){
            for(int j = 2*i; j <= range; j = j + i)
                idx[j]=false;
        }
        for (i = 0; i <= range; i++){
            if(idx[i]<<==true)
                cout<< i << " ";
        }
    }
    return 0;
}