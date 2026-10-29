#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,k;
        cin>>x>>k;
        if(x%k!=0){
            cout<<1<<endl;
            cout<<x<<endl;
        }else{
            vector<int> num;
            while(x){
                if(x%k!=0){
                    num.push_back(x);
                    x-=x;
                }else{
                    x--;
                    num.push_back(1);
                }
            }
            cout<<num.size()<<endl;
            for(int i=0;i<num.size();i++){
                cout<<num[i]<<" ";
            }
            cout<<endl;
        }
    }
}