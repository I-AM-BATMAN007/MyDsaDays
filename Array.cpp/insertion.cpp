#include <iostream>
using namespace std;
int insert(int arr[], int n, int x, int cap, int pos){
    if(n==cap){
        return n;
    }
    for(int i=n-1;i>=pos-1/*indexing set karne ke liye,pos-1 and n-1*/;i--){
        arr[i+1]=arr[i];
    }
    arr[pos-1]=x;
    n=n+1;
    cout << "Array after insertion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int arr[10] = {1, 2, 3, 4, 5}; // Initial array with a capacity of 10
    int n = 5; // Current size of the array
    int x = 10; // Element to be inserted
    int cap = 10; // Capacity of the array
    int pos = 3; // Position at which the element is to be inserted (1-based index)

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    insert(arr, n, x, cap, pos);

    // cout << "Array after insertion: ";
    // for (int i = 0; i < n; i++) {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // return 0;
}