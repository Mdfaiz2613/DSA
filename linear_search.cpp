#include<iostream>
using namespace std;

bool linearsearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
       if( arr[i]==key){
        return 1;
       }
    }
    return 0;
}

int main(){
    int size ,key ;
    cout<<"enter the size :"<<endl;
    cin>>size;
    int arr[100];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"enter the key :"<<endl;
    cin>>key;

    int ans=linearsearch(arr,size,key);
    if(ans){
        cout<<"key is present::"<<endl;
    }
    else{
        cout<<"key is not present::"<<endl;
    }
}