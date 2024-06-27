//aim is to find the number that is appearing odd number of times
#include <iostream>
using namespace std;

int FindOdd(int arr[],int n){
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j])
            count++;
        }
        
        if(count%2!=0)
            cout<<arr[i]<<endl;
        
    }
    }

int main(){
    int n;
    cout<<"size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    FindOdd(arr,n);
}
//-------------------------------------------------------------------------------------
//very beautiful way using XOR
// as 4^0=4; 4^4=0; so 4^4^4=4
//so if arr=4,7,8,7,8; so, 4^7^8^7^8 ->can we written as 4^(7^7)^(8^8)-> 4^0^0->4

#include <iostream>
using namespace std;
int FindOdd(int arr[],int n){
    int res=arr[0];
    for(int i=1;i<n;i++){
        res=res^arr[i];

    }
    cout<< res;
}
int main(){
    int n;
    cout<<"size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    FindOdd(arr,n);
}
