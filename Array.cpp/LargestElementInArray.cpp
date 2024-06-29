#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int maxIndex=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[maxIndex])
        maxIndex=i;
    }
    cout<<"Maximum element index in array is: "<<maxIndex<<endl;
    
}

//---------------------(or)-----------------------------------

#include<iostream>
using namespace std;

int main(){
     int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

   
    for(int i=0;i<n;i++)
    {
         bool flag=true;
        for(int j=0;j<n;j++)
        {
            if(arr[i]<arr[j])//logic here is we select 1st element and make it true,then we
            // run that element in array and if by chance we get any other such element which
            // is greater than the main element we make it false,then we choose second element and it goes on
            {
                flag=false;
                break;
            }
        }
        if(flag==true)
        {
            cout<<i<<endl;
            break;
        }
    }


}