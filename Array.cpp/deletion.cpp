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

//-----------(maturea way)----------------------------------
#include <iostream>
using namespace std;

int del(int arr[], int n, int x) {
    int i;
    // Find the element to be deleted
    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            break;
        }
    }
    // If the element was not found, return the original size
    if (i == n) {
        return n;
    }
    // Shift elements to the left to fill the gap
    for (int j = i; j < n - 1; j++) {
        arr[j] = arr[j + 1];
    }
    // Return the new size of the array
    return n - 1;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int x;
    cout << "Enter element to be deleted: ";
    cin >> x;
    
    n = del(arr, n, x);

    cout << "Array after deletion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
