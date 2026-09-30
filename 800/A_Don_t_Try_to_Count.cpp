#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x>>s;
        int count=0;
        // int itr=0;
        // int i=0;
        // while(m>0){
        //     m/=2;
        //     i++;
        // }
        while(n<m){
            if(x.find(s)!=-1){
                break;
            }
            x+=x;
            n=x.size();
            count++;
        }
        if(x.find(s)!=-1){
            cout<<count<<endl;
            continue;
        }
        x+=x;
        if(x.find(s)!=-1){
            cout<<count+1<<endl;
        }else cout<<-1<<endl;
    }
}