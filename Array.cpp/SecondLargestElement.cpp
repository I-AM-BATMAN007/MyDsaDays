#include<iostream>
using namespace std;


int main(){
    int n,i;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int maxIndex=0;
    for(int i=1;i<n;i++){
        if(arr[i]>maxIndex)
        maxIndex=i;
    }

  
    for(int j=maxIndex;j<n;j++){
        arr[j]=arr[j+1];
    }
    n=n-1;

maxIndex=0;
   for(int i=0;i<n;i++){
        if(arr[i]>maxIndex)
        maxIndex=i;
    }
    cout<<arr[maxIndex]<<endl;

    
}
