#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"enter the number "<<endl;
    cin>>n;
    int ans=1;
    for(int i=0;i<=30;i++){
        if(ans==n){
            cout<<"number is in form of 2^n:"<<endl;
            break;
        }
        
            ans=ans*2;
        
    }
    if(ans!=n){
        cout<<"number is not in form of 2^n:";
    }
    return 0;
}
