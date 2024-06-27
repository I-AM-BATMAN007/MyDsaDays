 //------------( NALLA WAY ) ----------------
// #include <iostream>
// using namespace std;

// void power(int x,int n){
//     int s=1;
//     for(int i=1;i<=n;i++){
//         s=s*n;}
//         cout<<s<<endl;
    
// }
// int main(){
//     int x,n;
//     cout<<"n and m daal"<<endl;
//     cin>>x>>n;
//     power(x,n);
// }
//------------( anothr way to save time ) ----------------
/*
*we use the idea that for power(x,n)= 
* if n is even then power(x,n)=power(x,n/2)*power(x,n/2)
* if n is odd then power(x,n)=x*power(x,n-1)*x
?ofcourse to save time.
*/
#include <iostream>
using namespace std;

int power(int x,int n){
    if(n==0){
        return 1;
    }
    //int temp=power(x,n/2);
    
    if(n%2==0){
        //return temp*temp;
        return power(x,n/2)*power(x,n/2);
    }
    else{
        //return temp*temp*x;
        //return power(x,n-1)*x;
        return power(x,n/2)*power(x,n/2)*x;
    }
}
int main(){
    int x,n;
    cout<<"n and m daal"<<endl;
    cin>>x>>n;
    cout<<power(x,n);
}