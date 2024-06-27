//naive way
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    while(n>0){
    //     if(n%2==1){
    //         count++;
    // }
    count = count+(n&1);
    n=n/2;
    }
    cout<<count;
}

//brian kernighan's algorithm-------------------------------------------

//idea= traverse only through set bits.
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    while(n>0){
        //idea here is to make the rightmost set bit as 0. after every iteration
        n=n&(n-1);
        count=count+1;        
    }
    cout<<count;
}

//lookup table solution --------------------------------------------------

//sikhlena bhai khudse course pe hai dsa ke geeks for geeks me