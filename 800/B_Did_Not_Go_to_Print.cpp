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
        vector<bool> doc(n+1,false);
        stack<int> stk;
        int k=n;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                stk.push(i+1);
            }else if(s[i]=='2'){
                if(stk.empty()){
                    doc[i+1]=true;
                    k--;
                }else{
                    doc[stk.top()]=true;
                    stk.pop();
                    k--;
                }
            }else{
                doc[i+1]=true;
                k--;
            }
        }
        cout<<k<<endl;
        if(k==0){
            cout<<endl;
            continue;
        }
        for(int i=1;i<doc.size();i++){
            if(!doc[i]) cout<<i<<" ";
        }
        cout<<endl;
    }
}