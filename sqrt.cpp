#include<iostream>
using namespace std;

 long long int binarysearch(int n){
    int start=0;
    int end=n;
    long long int mid=start+(end-start);
    int ans=-1;

    while(start<=end){
       long long int square=mid*mid;
        if(square==n){
            return mid;
        }
        else if(square<n){
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
         mid=start+(end-start)/2;
    }
    return ans;
}
double moreprecision(int n, int precision,int tempsol){
    double factor=1;
    double ans=tempsol;
    for(int i=0;i<precision;i++){
        factor=factor/10;
        for(double j=ans;j*j<n;j=j*factor){
            ans=j;
        }
    }
    return ans;
}

int main(){
    
    int n;
    cout<<"enter the number : "<<endl;
    cin>>n;
    
    int tempsol=binarysearch(n);
    cout<<"square root of "<<n<<" is : "<<moreprecision(n,3,tempsol);
    return 0;
}