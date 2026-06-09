#include<iostream>
using namespace std;


void reverse(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int size;
    cout<<"enter the size of array:"<<endl;
    cin>>size;
    int arr[100];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    printarray(arr,size);
    reverse(arr,size);
    printarray(arr,size);
    return 0;

}