#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int ana,ket=0;
        if(c%2!=0){
            ana=(c+1)/2;
        }else{
            ana=c/2;
        }
        ket=c-ana;
        ana+=a;
        ket+=b;
        if(ana>ket) cout<<"First"<<endl;
        else cout<<"Second"<<endl;
    }
}