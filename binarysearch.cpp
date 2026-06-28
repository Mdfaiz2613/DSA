#include<iostream>
using namespace std;

int binarysearch(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
         mid=start+(end-start)/2;
    }
    return -1;
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
    int index=binarysearch(arr,size,key);
    cout<<"element is present at index:"<<index;
    return 0;
}