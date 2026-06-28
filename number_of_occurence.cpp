#include<iostream>
using namespace std;

int firstoccurence(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int ans=-1;
    int mid=start+(end-start)/2;;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
         mid=start+(end-start)/2;
    }
    return ans;
}

int lastoccurence(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int ans=-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
             start=mid+1;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
         mid=start+(end-start)/2;
    }
    return ans;
}

int main(){
    int arr[1000];
    int size;
    cout<<"enter the size:"<<endl;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter the key:"<<endl;
    cin>>key;
   
    int first=firstoccurence(arr,size,key);
    int second=lastoccurence(arr,size,key);
    int ans=(second-first)+1;
    cout<<"key is occur at "<<ans<<" time:";
    return 0;
}