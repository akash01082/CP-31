#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        bool isRes=false;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==k) isRes=true;
        }
        if(isRes) cout<<"YES"<<endl;
        else      cout<<"NO"<<endl;
    }
}