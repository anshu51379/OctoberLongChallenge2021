// By: Abhishek Kumar
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n==1){
            cout<<"1"<<endl;
            continue;
        }
        long long ans = 1;
        while (ans*2<=n){
            ans = ans*2;
        }
        long long a = n - ans + 1;
        if (n==ans){
            cout<<ans/2<<endl; 
        }
        else{
            cout<<max(a,ans/2)<<endl;
        }
    }
}
