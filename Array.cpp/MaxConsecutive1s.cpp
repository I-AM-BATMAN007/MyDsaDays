//max no of  consecutive 1 in array,(not max no of 1)
#include <iostream>
using namespace std;

int max1s(int arr[], int n)
{
    int a=0;
    for(int i=0;i<n;i++)
    {
        int b=0;
        for(int j=1;j<n;j++)
        {
            if(arr[i]==1){
                b++;
            }
            else break;
        }
        a=max(a,b);
    }
    return a;
}

int main(){
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<max1s(arr,n);
}