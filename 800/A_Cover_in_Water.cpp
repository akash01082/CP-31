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
        int singleCell=0;
        int tripleCell=0;
        for(int i=0;i<n;i++){
            if(s[i]=='.'){
                singleCell++;
                tripleCell++;
                if(tripleCell==3) break;
            }else{
                tripleCell=0;
            }
        }
        if(tripleCell==3){
            cout<<2<<endl;
        }else{
            cout<<singleCell<<endl;
        }
    }
}