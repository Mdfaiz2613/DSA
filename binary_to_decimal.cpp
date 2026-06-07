#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int n;
    cout<<"enter the number in binary form:"<<endl;
    cin>>n;
    int ans=0;
    int i=0;
    while(n!=0){
        int digit=n%10;
         ans=ans+(pow(2,i)*digit);
        i++;
        n=n/10;

    }
    cout<<ans;

}