#include<iostream>
using namespace std;

void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}

void bubbleshort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
               swap(arr[j],arr[j+1]); 
            }
            
        }
        
    }
}

int main(){
    int arr[100];
    int size ;
    cout<<"enter the size of array:"<<endl;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    printarray(arr,size);
    cout<<endl;
    bubbleshort(arr,size);
    cout<<endl;
    printarray(arr,size);
}