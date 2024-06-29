#include<iostream>
using namespace std;
int del(int arr[],int n,int x){
    int i;
    for(i=0;i<n;i++)
    if(arr[i]==x)
    break;
    for(int j=i;j<n-1;j++){
        arr[j]=arr[j+1];
    }
    n=n-1;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"enter element to be deleted"<<endl;
    cin>>x;
    del(arr,n,x);
}