// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        if(size==2)
            return -1;
        if(size==1)
            return a[0];
        int n=size/2;
        sort(a,a+size);
        int hash[100001]={0};
        if(size==1)
        return a[0];
        int d=0;
        for(int i=0;i<size;i++)
        {
            hash[a[i]]++;
            if(hash[a[i]]>d)
                d=hash[a[i]];
        }
        
            for(int i=0;i<size;i++)
            {
                if(d>n)
                {   
                    if(hash[a[i]]==d)
                        return a[i];
                }
            }
        
            return -1;
    }
};

// { Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}
  // } Driver Code Ends
