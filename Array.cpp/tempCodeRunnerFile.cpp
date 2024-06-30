#include <iostream>
using namespace std;

int removeDuplicates(int arr[], int n)
{
    for(int i=0;i<=n-1;i++){
        if(arr[i]==arr[i+1]){
            for(int j=i;j<=n-1;j++){
                arr[j]=arr[j+1];
            }
            n=n-1;
            i--;//very interesting move;use pen-paper and figure it out;done when there are 3 or more duplicates together
            //suppose we del arr[0](ie we give arr[1] value to arr[0] and so on) then the main for-loop will make i=1 to continue the procedure.
            //but the new arr[0](which was previously arr[1]) has escaped as its not been checked as loop goes for arr[1](which was previously arr[2]).
            //so we decerese i by 1 to again check from old deleted arr index when deletion is performed.
    }
}
return n;
}
int main(){
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int newN=removeDuplicates(arr,n);
    cout<<"New array is: "<<endl;
    for(int i=0;i<newN;i++){
        cout<<arr[i]<<" ";
    }
}