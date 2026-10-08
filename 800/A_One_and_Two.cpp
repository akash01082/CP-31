#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int totTwo=0;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==2) totTwo++;
        }
        int leftTwo=0;
        int res=-1;
        for(int i=0;i<n-1;i++){
            if(arr[i]==2){
                totTwo--;
                leftTwo++;
            }
            if(totTwo==leftTwo){
                res=i+1;
                break;
            }
        }
        cout<<res<<endl;
    }
}