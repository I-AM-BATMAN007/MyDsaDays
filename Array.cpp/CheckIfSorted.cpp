#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int flag=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<"Array is not sorted"<<endl;
    }

    else{
        cout<<"Array is sorted"<<endl;
    }
}