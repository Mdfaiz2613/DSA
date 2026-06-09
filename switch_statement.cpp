#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"enter the numbers:"<<endl;
    cin>>n>>m;
    char op;
    cout<<"give operaion expression"<<endl;
    cin>>op;
    switch(op){
        case '+':cout<<"addition is:"<<n+m;
        break;
        case '-':cout<<"subtraction is:"<<n-m;
        break;
        case '*':cout<<"multiplication is:"<<n*m;
        break;
        case '/':cout<<"division is:"<<n/m;
        break;
        default:cout<<"done"<<endl;
        break;
    }
    return 0;
}