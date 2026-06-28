#include<iostream>
using namespace std;

int intersection(int arr1[],int n,int arr2,int m){
    for(int i=0;i<n;i++){
        int element =arr1[i];
        for(int j=0;j<m;j++){
            if(element==arr2[j]){

            }
        }
      
    }
    for(int i=1;i<n;i++){
       ans =ans^i;
    }
    return ans;
}

int main(){
    int arr1[100];
    int size1;
    cout<<"enter the size:"<<endl;
    cin>>size1;
    for(int i=0;i<size1;i++){
        cin>>arr1[i];

    }

    int arr2[100];
    int size2;
    cout<<"enter the size:"<<endl;
    cin>>size2;
    for(int i=0;i<size2;i++){
        cin>>arr1[i];

    }
   
    return 0;
}