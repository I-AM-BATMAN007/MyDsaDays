#include <iostream>
using namespace std;

void Frequency(int arr[], int n){
    int freq=1;int i=0;
    while(i<n){
        while(arr[i]==arr[i+1]){
            freq++;
            i++;
        }
        cout<<arr[i]<<" "<<freq<<endl;
        freq=1;
        i++;
    }
    if(n==1||n==0){
        cout<<arr[0]<<" "<<1<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Frequency(arr,n);
}