#include <iostream>
using namespace std;
int sum(int n){
    if(n==0)//base case
    return 0;
    return n+sum(n-1);//recursive case
}
int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    cout<<sum(n);
}
/* lets understand somthing about it:
! time complexity is O(n) as it will run n+1 time.
! space complexity is O(n) as at max n+1 functions will be open and waiting for their child process to finish,and when n==0 then open fns will start closing one by one
*/