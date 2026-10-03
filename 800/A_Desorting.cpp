#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int gap=INT_MAX;
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                cout<<0<<endl;
                gap=0;
                break;
            }
        }
        if(gap==0) continue;

        for(int i=0;i<n-1;i++){
            gap=min(gap, arr[i+1]-arr[i]);
          
        }
        if(gap%2!=0) cout<<(gap+1)/2<<endl;
        else cout<<gap/2 +1<<endl;
    }
}