#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int point=0;
        for(int i=1;i<=10;i++){
            for(int j=1;j<=10;j++){
                char x;
                cin>>x;
                if(x=='X'){
                    int top=i;
                    int bottom=10-i+1;
                    int left=j;
                    int right=10-j+1;
                    // cout<<"top="<<top<<" bottom= "<<bottom<<" left= "<<left<<" right= "<<right<<endl;
                    int num=min(min(left,right),min(top,bottom));
                    // cout<<"num= "<<num<<endl;
                    point+=num;
                    // cout<<" point= "<<point<<endl;;
                }
            }
        }
        cout<<point<<endl;
    }
}