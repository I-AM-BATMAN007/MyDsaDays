//there are fixed 2 numbers in an array which will appear odd number of times. find them
#include <iostream>
using namespace std;

int FindOdd(int arr[],int n){
    for(int i=0;i<n;i++)
    {
        int count=0;// remember count will automatically turn 0 after every cycle of i-loop. 
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
                count++;
            
        }
        if(count%2!=0){
            cout<<"array element that appears odd number of times:"<<arr[i]<<endl;
        }
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

//---effective solution using XOR ----------------
/* as 4^0=4; 4^4=0; so 4^4^4=4
* step 1: x= 5^7^8^7^8^2 -> 5^2^(7^7)^(8^8) -> 5^2^0^0->5^2(i.e 101^010)->7( i.e 111 )
?step 2: ab 7 se 5 ko 2 se kaise nikale? consider a set bit(mostly right most wala bit) from 7 and do xor of it with all 
?the elements of array who has that bit set.by this we will get or first odd occ.
! now for second number , do xor of all element in array which has that setbit of 7 as 0.(jinka 1 nahi tha unka xor kardo mtlb)
*/

#include <iostream>
using namespace std;

int FindOdd1(int arr[],int n){
    int res= arr[0];
    for(int i=1;i<n;i++){
        res= res^arr[i];
    }
    int k=(res & (~(res-1)));//it find a bitset which has only 1 set bit and the setbit corresponds to last set bit of res.
    int res1=0;
    int res2=0;
    for(int i=0;i<n;i++){
        if((arr[i]&k)!=0){
            res1=res1^arr[i];
        }
        else{
            res2=res2^arr[i];
        }
    }
    cout<<"first odd element"<<res1<<endl;
    cout<<"second wala"<<res2<<endl;
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
    FindOdd1(arr,n);
}
