// By: Abhishek Kumar
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    while(n--){
        long long x;
        cin>>x;
        if(x==0){
            cout<<"1"<<endl;
        }
        else if (x==1){
            cout<<"2"<<endl;
        }
        else if (x==2){
            cout<<"2"<<endl;
        }
        else{
            long long ans = 1;
            while(2*ans<=x){
                ans = ans * 2;
            }
            if(ans==x){
                cout<<x<<endl;
            }
            else if (x==(2*ans-1)){
                cout<<x+1<<endl;
            }
            else{
                cout<<ans<<endl;
            }
        }
    }
}
