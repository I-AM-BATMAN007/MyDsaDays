/*prime factors are:-
*the prime numbers that multiply together to give the original number. ( or )
*the prime numbers that divide the original number without leaving a remainder.
*/

// For a given number 
// 𝑛, write a function to print all prime factors of n. This involves dividing 
//n by 2 until it is no longer divisible by 2, then starting a loop from 3 to the square root of 
// 𝑛 to find other prime factors
#include <iostream>
using namespace std;
bool isPrime(int n){
    if(n==1)
    return false;
    if(n==2 || n==3){
        return true;
    }
    if(n%2==0 || n%3==0){
        return false;
    }
    for(int i=5;i*i<=n;i+6)
    if(n%i==0 ||n%(n+2)==0)
    return false;
    return true;
}
int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    for(int i=2;i<=n;i++){
      //  if(isPrime(i)){
            
            while(n%i==0){
                cout<<i<<" ";
                n=n/i;
            }
      //  }
}
}

//-----------------( or )-----------------------------------------------
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    if(n<=1)//ignore numbers less than or equal to 1
    return;
    
        for(int i=2;i*i<=n;i++){
            while(n%i==0){
                cout<<i<<" ";
                n=n/i;
            }
    }
        if(n>1){//After the for loop completes, if n is still greater than 1, it means
        // n itself is a prime number and has not been fully divided by any smaller factors.
            cout<<n;
        }
    }
//------------------( or )-----------------------------------------------

//favourite way
/* as we also know a number divisible by 2 & 3 are also not divisible by its multiples.
* so now the leftover numbers become 5,7,11,13,17...sqrt(n)
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    if(n<=1) //ignore
    cout<<"invalid format"<<endl;
    while(n%2==0){ cout<<2<<" ";n=n/2; }
    while(n%3==0){ cout<<3<<" ";n=n/3; }
    for(int i=5;i*i<=n;i+6){
        while(n%i==0){ cout<<i<<" ";n=n/i; }
        while(n%(i+2)==0){cout<<(i+2)<<" ";n=n/(i+2);}
    }
    if(n>3){cout<<n;}
}
