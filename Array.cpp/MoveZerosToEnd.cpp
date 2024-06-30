#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter size of array" << endl;
    cin >> n;  // Read the size of the array
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];  // Read elements into the array
    }

    for(int i = 0; i < n; i++){
        if(arr[i] == 0){  // Check if the current element is zero
            for(int j = i; j < n - 1; j++){
                arr[j] = arr[j + 1];  // Shift elements to the left
            }
            arr[n - 1] = 0;  // Set the last element to zero
            i--;  // Decrement i to recheck the current position
        }
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " " << endl;  // Print the modified array
    }
}
