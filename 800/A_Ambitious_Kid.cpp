#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int res=INT_MAX;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        x=abs(x);
        res=min(res,x);
    }
    cout<<res<<endl;
}