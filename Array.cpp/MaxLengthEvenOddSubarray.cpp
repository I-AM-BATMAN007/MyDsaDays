#include <iostream>
using namespace std;
int max(int arr[],int n){
    int res=1;//har first wala even ya odd hai pehele se hie
    for(int i=0;i<n;i++){
        int count =1;
        for(int j=i+1;j<n;j++){
            if(arr[i]%2==0 && arr[j]%2!=0 || arr[i]%2!=0 && arr[j]%2==0){
                count++;
            }
            res=max(count,res);
        }
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<max(arr,n);
}
//-------smart way---------------------

#include <iostream>
using namespace std;
int max(int arr[],int n){
    int res=1;//har first wala even ya odd hai pehele se hie
    int count =1;
    for(int i=1;i<n;i++){
        
    
            if(arr[i]%2==0 && arr[i-1]%2!=0 || arr[i]%2!=0 && arr[i-1]%2==0){
                count++;
                res=max(count,res);
        }
        else
        count=1;
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<max(arr,n);
}