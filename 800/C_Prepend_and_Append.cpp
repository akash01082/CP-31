#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int st=0,end=n-1;
        int res=n;
        while(st<end){
            if(s[st]==s[end]){
                break;
            }
            st++;
            end--;
            res-=2;
        }
        cout<<res<<endl;
    }
}