#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int gas_dis=arr[0];
        for(int i=0;i<n-1;i++){
            int dist=arr[i+1]-arr[i];
            gas_dis=max(gas_dis,dist);
        }
        int lastGasDis=2*(x-arr[n-1]);
        int res=max(lastGasDis,gas_dis);
        cout<<res<<endl;
    }
}