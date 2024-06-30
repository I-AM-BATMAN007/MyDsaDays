//leader=when an element has no greater than it on its rightside
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of array" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {   
        cin >> arr[i];
    }
    int curr_max = arr[n - 1];
    cout<<curr_max<<" ";
    for(int i=n-2;i>=0;i--){
        if(curr_max<arr[i]){
            curr_max=arr[i];
            cout<<curr_max<<" ";
        }
    }
}