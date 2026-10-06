#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int op=0;
        if(b>d){
            cout<<-1<<endl;
            continue;
        }else{
            op=(d-b);
            a+=op;
            b+=op;
            
        }
        if(c>a){
            cout<<-1<<endl;
            continue;
        }else{
            cout<<op+(a-c)<<endl;
        }
    }
}