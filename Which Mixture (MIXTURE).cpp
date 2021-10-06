// By: Abhishek Kumar
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test_cases;
    cin>>test_cases;
    int data1, data2;
    while(test_cases--){
        cin>>data1>>data2;
        if(data1>0&&data2>0){
            cout<<"Solution\n";
        }
        else if(data1==0){
            cout<<"Liquid\n";
        }
        else if(data2==0){
            cout<<"Solid\n";
        }
    }
}
