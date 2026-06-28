#include<iostream>
using namespace std;

int duplicate(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
       ans =ans^arr[i];
    }
    for(int i=1;i<n;i++){
       ans =ans^i;
    }
    return ans;
}

int main(){
    int arr[100];
    int size;
    cout<<"enter the size:"<<endl;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];

    }
    cout<<"duplicate number is "<< duplicate(arr,size);
    return 0;
}