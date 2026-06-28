#include<iostream>
using namespace std;

void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}

void selectionshort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
            
        }
        swap(arr[minindex],arr[i]);
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
    selectionshort(arr,size);
    cout<<endl;
    printarray(arr,size);
}