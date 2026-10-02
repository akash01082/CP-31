#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,odd=0,even=0;
        cin>>n;
        while(n--){
            int x;
            cin>>x;
            if(x%2!=0) odd++;
            else even++;
        }
        if(odd%2!=0){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
}