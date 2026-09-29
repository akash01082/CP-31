#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        set<int> s;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            s.insert(arr[i]);
        }
        if(s.size()==1){
            cout<<"Yes"<<endl;
            continue;
        }
        if(s.size()!=2){
            cout<<"No"<<endl;
            continue;
        }
        int first=*(s.begin());
        int second=*(s.end());
        int x=0,y=0;
        for(int i=0;i<n;i++){
            if(arr[i]==first){
                x++;
            }else{
                y++;
            }
        }
        if(x>y && x-1==y){
            cout<<"Yes"<<endl;
        }
        else if(y>x && y-1==x){
            cout<<"Yes"<<endl;
        }
        else if(x==y){
            cout<<"Yes"<<endl;
        }else
            cout<<"No"<<endl;

    }
}